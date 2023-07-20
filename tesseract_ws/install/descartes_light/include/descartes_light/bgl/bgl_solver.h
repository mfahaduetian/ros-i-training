/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2021, Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <descartes_light/descartes_macros.h>
DESCARTES_IGNORE_WARNINGS_PUSH
#include <thread>
#include <vector>
DESCARTES_IGNORE_WARNINGS_POP

#include <descartes_light/core/solver.h>
#include <descartes_light/bgl/boost_graph_types.h>

namespace descartes_light
{
/**
 * @brief Partial implementation for solvers leveraging the Boost Graph Library
 */
template <typename FloatType>
class BGLSolverBase : public Solver<FloatType>
{
public:
  BGLSolverBase(unsigned num_threads = std::thread::hardware_concurrency());

  inline const BGLGraph<FloatType>& getGraph() const { return graph_; }

  /**
   * @brief Serializes a graph to file, denoting the path through the graph
   */
  void writeGraphWithPath(const std::string& filename) const;

protected:
  /**
   * @brief Reconstructs a path through the graph from the source to the target vertex using the predecessor map
   */
  std::vector<VertexDesc<FloatType>> reconstructPath(const VertexDesc<FloatType>& source,
                                                     const VertexDesc<FloatType>& target) const;

  /**
   * @brief Converts a path of vertex descriptors into a path of joint states
   */
  std::vector<typename State<FloatType>::ConstPtr> toStates(const std::vector<VertexDesc<FloatType>>& path) const;

  /** @brief Number of threads for parallel processing */
  unsigned num_threads_;
  /** @brief Graph representation of the planning problem */
  BGLGraph<FloatType> graph_;
  /** @brief Ladder graph representation of the graph vertices, used for creating edge connections */
  std::vector<std::vector<VertexDesc<FloatType>>> ladder_rungs_;
  /** @brief Artificial source vertex with a zero-cost edge to all vertices in the first ladder rung. All searches
   * should start from this vertex */
  VertexDesc<FloatType> source_;
  /** @brief Predecessor map generated by the search */
  std::vector<VertexDesc<FloatType>> predecessors_;
};

/**
 * @brief BGL Solver Static Vertex Dynamic Edge (SVDE) partial implementation
 * @details Constructs only vertices in the build function (i.e. statically) with the assumption that edges will be
 * added during the search (i.e. dynamically)
 */
template <typename FloatType>
class BGLSolverBaseSVDE : public BGLSolverBase<FloatType>
{
public:
  using BGLSolverBase<FloatType>::BGLSolverBase;

  BuildStatus buildImpl(const std::vector<typename WaypointSampler<FloatType>::ConstPtr>& trajectory,
                        const std::vector<typename EdgeEvaluator<FloatType>::ConstPtr>& edge_eval,
                        const std::vector<typename StateEvaluator<FloatType>::ConstPtr>& state_eval) override;

protected:
  std::vector<typename EdgeEvaluator<FloatType>::ConstPtr> edge_eval_;
};

/**
 * @brief BGL solver Static Vertex Static Edge (SVSE) partial implementation
 * @details Constructs both vertices and edges in the build function (i.e. statically)
 */
template <typename FloatType>
class BGLSolverBaseSVSE : public BGLSolverBaseSVDE<FloatType>
{
public:
  using BGLSolverBaseSVDE<FloatType>::BGLSolverBaseSVDE;

  BuildStatus buildImpl(const std::vector<typename WaypointSampler<FloatType>::ConstPtr>& trajectory,
                        const std::vector<typename EdgeEvaluator<FloatType>::ConstPtr>& edge_eval,
                        const std::vector<typename StateEvaluator<FloatType>::ConstPtr>& state_eval) override;
};

}  // namespace descartes_light
