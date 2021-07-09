void deserializeStudent(char * buf, struct student *s){
    s->id = binn_object_int32(buf,"id");
    s->name = binn_object_str(buf,"name");
    s->age = binn_object_int32(buf,"age");
}

