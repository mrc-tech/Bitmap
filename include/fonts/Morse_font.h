/****************************************************************
Font data in array format. [charWidth x charHeight length array]
std::vector is sorted by ASCII codes from 32 (space) to  126 (~)

parameters:
	font[0][0] : characters Width
	font[0][1] : characters Height

example of data storage ('#' are the printed pixels of the char)
	--#--    --0--
	-#-#- -> -0-0- -> --0-- -0-0- -00-- -> --0---0-0--00--
	-##--    -00--

Copyright (c) Andrea Marchi 2021
****************************************************************/


std::vector<std::string> Morse_font = {
	{8, 16}, // width and height of character in pixels {charWidth, charHeight}
	"--------------------------------------------------------------------------------------------------------------------------------", // <space>
	"-------------------00-----0000----0000----0000-----00------00------00--------------00------00-----------------------------------", // !
	"---------00--00--00--00--00--00---0--0------------------------------------------------------------------------------------------", // "
	"-------------------------00-00---00-00--0000000--00-00---00-00---00-00--0000000--00-00---00-00----------------------------------", // #
	"---00------00----00000--00---00-00----0-00-------00000-------00------00-0----00-00---00--00000-----00------00-------------------", // $
	"--------------------------------00----0-00---00-----00-----00-----00-----00-----00---00-0----00---------------------------------", // %
	"------------------000----00-00---00-00----000----000-00-00-000--00--00--00--00--00--00---000-00---------------------------------", // &
	"----------00------00------00-----00---------------------------------------------------------------------------------------------", // '
	"--------------------00-----00-----00------00------00------00------00------00-------00-------00----------------------------------", // (
	"------------------00-------00-------00------00------00------00------00------00-----00-----00------------------------------------", // )
	"-----------------------------------------00--00---0000--00000000--0000---00--00-------------------------------------------------", // *
	"-------------------------------------------00------00----000000----00------00---------------------------------------------------", // +
	"---------------------------------------------------------------------------00------00------00-----00----------------------------", // ,
	"--------------------------------------------------------0000000-----------------------------------------------------------------", // -
	"-----------------------------------------------------------------------------------00------00-----------------------------------", // .
	"--------------------------------------0------00-----00-----00-----00-----00-----00------0---------------------------------------", // /
	"--------0000000-0000000---------0000000-0000000---------0000000-0000000---------0000000-0000000---------0000000-0000000---------", // 0
	"----------000-----000-----------0000000-0000000---------0000000-0000000---------0000000-0000000---------0000000-0000000---------", // 1
	"----------000-----000-------------000-----000-----------0000000-0000000---------0000000-0000000---------0000000-0000000---------", // 2
	"----------000-----000-------------000-----000-------------000-----000-----------0000000-0000000---------0000000-0000000---------", // 3
	"----------000-----000-------------000-----000-------------000-----000-------------000-----000-----------0000000-0000000---------", // 4
	"----------000-----000-------------000-----000-------------000-----000-------------000-----000-------------000-----000-----------", // 5
	"--------0000000-0000000-----------000-----000-------------000-----000-------------000-----000-------------000-----000-----------", // 6
	"--------0000000-0000000---------0000000-0000000-----------000-----000-------------000-----000-------------000-----000-----------", // 7
	"--------0000000-0000000---------0000000-0000000---------0000000-0000000-----------000-----000-------------000-----000-----------", // 8
	"--------0000000-0000000---------0000000-0000000---------0000000-0000000---------0000000-0000000-----------000-----000-----------", // 9
	"-----------------------------------00------00------------------------------00------00-------------------------------------------", // :
	"-----------------------------------00------00------------------------------00------00-----00------------------------------------", // ;
	"-----------------------------00-----00-----00-----00-----00-------00-------00-------00-------00---------------------------------", // <
	"-----------------------------------------000000------------------000000---------------------------------------------------------", // =
	"-------------------------00-------00-------00-------00-------00-----00-----00-----00-----00-------------------------------------", // >
	"-----------------00000--00---00-00---00-----00-----00------00------00--------------00------00-----------------------------------", // ?
	"-------------------------00000--00---00-00---00-00-0000-00-0000-00-0000-00-000--00-------00000----------------------------------", // @
	"----------000-----000-----------0000000-0000000---------------------------------------------------------------------------------", // A
	"--------0000000-0000000-----------000-----000-------------000-----000-------------000-----000-----------------------------------", // B
	"--------0000000-0000000-----------000-----000-----------0000000-0000000-----------000-----000-----------------------------------", // C
	"--------0000000-0000000-----------000-----000-------------000-----000-----------------------------------------------------------", // D
	"----------000-----000-----------------------------------------------------------------------------------------------------------", // E
	"----------000-----000-------------000-----000-----------0000000-0000000-----------000-----000-----------------------------------", // F
	"--------0000000-0000000---------0000000-0000000-----------000-----000-----------------------------------------------------------", // G
	"------------------000-----000-------------000-----000-------------000-----000-------------000-----000---------------------------", // H
	"----------000-----000-------------000-----000-----------------------------------------------------------------------------------", // I
	"----------000-----000-----------0000000-0000000---------0000000-0000000---------0000000-0000000---------------------------------", // J
	"--------0000000-0000000-----------000-----000-----------0000000-0000000---------------------------------------------------------", // K
	"----------000-----000-----------0000000-0000000-----------000-----000-------------000-----000-----------------------------------", // L
	"--------0000000-0000000---------0000000-0000000---------------------------------------------------------------------------------", // M
	"--------0000000-0000000-----------000-----000-----------------------------------------------------------------------------------", // N
	"--------0000000-0000000---------0000000-0000000---------0000000-0000000---------------------------------------------------------", // O
	"----------000-----000-----------0000000-0000000---------0000000-0000000-----------000-----000-----------------------------------", // P
	"--------0000000-0000000---------0000000-0000000-----------000-----000-----------0000000-0000000---------------------------------", // Q
	"----------000-----000-----------0000000-0000000-----------000-----000-----------------------------------------------------------", // R
	"----------000-----000-------------000-----000-------------000-----000-----------------------------------------------------------", // S
	"--------0000000-0000000---------------------------------------------------------------------------------------------------------", // T
	"----------000-----000-------------000-----000-----------0000000-0000000---------------------------------------------------------", // U
	"----------000-----000-------------000-----000-------------000-----000-----------0000000-0000000---------------------------------", // V
	"----------000-----000-----------0000000-0000000---------0000000-0000000---------------------------------------------------------", // W
	"--------0000000-0000000-----------000-----000-------------000-----000-----------0000000-0000000---------------------------------", // X
	"--------0000000-0000000-----------000-----000-----------0000000-0000000---------0000000-0000000---------------------------------", // Y
	"--------0000000-0000000---------0000000-0000000-----------000-----000-------------000-----000-----------------------------------", // Z
	"------------------0000----00------00------00------00------00------00------00------00------0000----------------------------------", // [
	"------------------------0-------00------000------000------000------000------000------00-------0---------------------------------", // '\'
	"------------------0000------00------00------00------00------00------00------00------00----0000----------------------------------", // ]
	"---0------000----00-00--00---00-------------------------------------------------------------------------------------------------", // ^
	"--------------------------------------------------------------------------------------------------------00000000----------------", // _
	"--00------00-------00-----------------------------------------------------------------------------------------------------------", // `
	"----------000-----000-----------0000000-0000000---------------------------------------------------------------------------------", // a
	"--------0000000-0000000-----------000-----000-------------000-----000-------------000-----000-----------------------------------", // b
	"--------0000000-0000000-----------000-----000-----------0000000-0000000-----------000-----000-----------------------------------", // c
	"--------0000000-0000000-----------000-----000-------------000-----000-----------------------------------------------------------", // d
	"----------000-----000-----------------------------------------------------------------------------------------------------------", // d
	"----------000-----000-------------000-----000-----------0000000-0000000-----------000-----000-----------------------------------", // f
	"--------0000000-0000000---------0000000-0000000-----------000-----000-----------------------------------------------------------", // g
	"----------000-----000-------------000-----000-------------000-----000-------------000-----000-----------------------------------", // h
	"----------000-----000-------------000-----000-----------------------------------------------------------------------------------", // i
	"----------000-----000-----------0000000-0000000---------0000000-0000000---------0000000-0000000---------------------------------", // j
	"--------0000000-0000000-----------000-----000-----------0000000-0000000-----------000-----000-----------------------------------", // k
	"----------000-----000-----------0000000-0000000-----------000-----000-------------000-----000-----------------------------------", // l
	"--------0000000-0000000---------0000000-0000000---------------------------------------------------------------------------------", // m
	"--------0000000-0000000-----------000-----000-----------------------------------------------------------------------------------", // n
	"--------0000000-0000000---------0000000-0000000---------0000000-0000000---------------------------------------------------------", // o
	"----------000-----000-----------0000000-0000000---------0000000-0000000-----------000-----000-----------------------------------", // p
	"--------0000000-0000000---------0000000-0000000-----------000-----000-----------0000000-0000000---------------------------------", // q
	"----------000-----000-----------0000000-0000000-----------000-----000-----------------------------------------------------------", // r
	"----------000-----000-------------000-----000-------------000-----000-----------------------------------------------------------", // s
	"--------0000000-0000000---------------------------------------------------------------------------------------------------------", // t
	"----------000-----000-------------000-----000-----------0000000-0000000---------------------------------------------------------", // u
	"----------000-----000-------------000-----000-------------000-----000-----------0000000-0000000---------------------------------", // v
	"----------000-----000-----------0000000-0000000---------0000000-0000000---------------------------------------------------------", // w
	"--------0000000-0000000-----------000-----000-------------000-----000-----------0000000-0000000---------------------------------", // x
	"--------0000000-0000000-----------000-----000-----------0000000-0000000---------0000000-0000000---------------------------------", // y
	"--------0000000-0000000---------0000000-0000000-----------000-----000-------------000-----000-----------------------------------", // z
	"--------------------000----00------00------00----000-------00------00------00------00-------000---------------------------------", // {
	"-------------------00------00------00------00--------------00------00------00------00------00-----------------------------------", // |
	"-----------------000-------00------00------00-------000----00------00------00------00----000------------------------------------", // }
	"-----------------000-00-00-000--------------------------------------------------------------------------------------------------"  // ~
};
