add_test( Composition-1 /home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions [==[--test-case=Composition-1]==])
set_tests_properties( Composition-1 PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( Composition-2 /home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions [==[--test-case=Composition-2]==])
set_tests_properties( Composition-2 PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( Composition-3 /home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions [==[--test-case=Composition-3]==])
set_tests_properties( Composition-3 PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( ParallelCompositions /home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions [==[--test-case=ParallelCompositions]==])
set_tests_properties( ParallelCompositions PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
set( compositions_TESTS Composition-1 Composition-2 Composition-3 ParallelCompositions)