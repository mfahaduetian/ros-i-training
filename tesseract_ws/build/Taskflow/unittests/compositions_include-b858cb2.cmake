if(EXISTS "/home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions_tests-b858cb2.cmake")
  include("/home/ubuntu/tesseract_ws/build/Taskflow/unittests/compositions_tests-b858cb2.cmake")
else()
  add_test(compositions_NOT_BUILT-b858cb2 compositions_NOT_BUILT-b858cb2)
endif()