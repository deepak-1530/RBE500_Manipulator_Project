# CMake generated Testfile for 
# Source directory: /root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example
# Build directory: /root/RBE500_Manipulator_Project/workspace/build/rbe500-example
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/cppcheck.xunit.xml" "--package-name" "rbe500-example" "--output-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/cppcheck.xunit.xml" "--include_dirs" "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/include" "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/open_manipulator_msgs/srv")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;42;ament_package;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/lint_cmake.xunit.xml" "--package-name" "rbe500-example" "--output-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;42;ament_package;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/uncrustify.xunit.xml" "--package-name" "rbe500-example" "--output-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;42;ament_package;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/xmllint.xunit.xml" "--package-name" "rbe500-example" "--output-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/root/RBE500_Manipulator_Project/workspace/build/rbe500-example/test_results/rbe500-example/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;42;ament_package;/root/RBE500_Manipulator_Project/workspace/src/OpenManipulatorX_ROS2/rbe500-example/CMakeLists.txt;0;")
