INCLUDE_DIRECTORIES (lib)
ADD_EXECUTABLE ( assert_test  debug_assert_test.c )
ADD_LIBRARY ( my_assert STATIC lib/my_assert.c )
TARGET_LINK_LIBRARIES ( assert_test PUBLIC my_assert )

