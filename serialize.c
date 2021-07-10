binn * createStudentBinn(binn *obj, int id, char* name, int age){
    binn_object_set_int32(obj, "id", id);
    binn_object_set_str(obj, "name", name);
    binn_object_set_int32(obj, "age", age);
    return obj;
};