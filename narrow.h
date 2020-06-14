//narrow(type, width) definition
#define narrow(type, width) struct {type value:width;} //a struct with a member bitfield 'value' of type 'type' and width 'width'