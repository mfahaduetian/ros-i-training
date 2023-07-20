add_test( EmptyFuture /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=EmptyFuture]==])
set_tests_properties( EmptyFuture PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( Future /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=Future]==])
set_tests_properties( Future PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( Cancel /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=Cancel]==])
set_tests_properties( Cancel PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( MultipleCancels /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=MultipleCancels]==])
set_tests_properties( MultipleCancels PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelSubflow /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelSubflow]==])
set_tests_properties( CancelSubflow PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelSubflowAsyncTasks /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelSubflowAsyncTasks]==])
set_tests_properties( CancelSubflowAsyncTasks PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelInfiniteLoop /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelInfiniteLoop]==])
set_tests_properties( CancelInfiniteLoop PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelFromAnother /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelFromAnother]==])
set_tests_properties( CancelFromAnother PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelFromAsync /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelFromAsync]==])
set_tests_properties( CancelFromAsync PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelAsync /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelAsync]==])
set_tests_properties( CancelAsync PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelSubflowAsync /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelSubflowAsync]==])
set_tests_properties( CancelSubflowAsync PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( CancelComposition /home/ubuntu/tesseract_ws/build/Taskflow/unittests/cancellation [==[--test-case=CancelComposition]==])
set_tests_properties( CancelComposition PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
set( cancellation_TESTS EmptyFuture Future Cancel MultipleCancels CancelSubflow CancelSubflowAsyncTasks CancelInfiniteLoop CancelFromAnother CancelFromAsync CancelAsync CancelSubflowAsync CancelComposition)
