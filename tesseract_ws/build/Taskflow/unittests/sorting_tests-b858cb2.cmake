add_test( BubbleSort /home/ubuntu/tesseract_ws/build/Taskflow/unittests/sorting [==[--test-case=BubbleSort]==])
set_tests_properties( BubbleSort PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( SelectionSort /home/ubuntu/tesseract_ws/build/Taskflow/unittests/sorting [==[--test-case=SelectionSort]==])
set_tests_properties( SelectionSort PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( MergeSort /home/ubuntu/tesseract_ws/build/Taskflow/unittests/sorting [==[--test-case=MergeSort]==])
set_tests_properties( MergeSort PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
add_test( QuickSort /home/ubuntu/tesseract_ws/build/Taskflow/unittests/sorting [==[--test-case=QuickSort]==])
set_tests_properties( QuickSort PROPERTIES WORKING_DIRECTORY /home/ubuntu/tesseract_ws/build/Taskflow/unittests)
set( sorting_TESTS BubbleSort SelectionSort MergeSort QuickSort)