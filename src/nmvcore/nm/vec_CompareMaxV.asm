//------------------------------------------------------------------------
//
//  $Workfile:: CompareMax.asm     $
//
//  ��������-��������� ����������
//
//  Copyright (c) RC Module Inc.
//
//  $Revision: 1.1 $      $Date: 2004/11/22 13:50:05 $
//
//! \if file_doc
//!
//! \file   Math_CompareMax.asm
//! \author S. Mushkaev
//! \brief  ������� ���������� ����.
//!
//! \endif
//!
//------------------------------------------------------------------------

begin ".text_nmvcore"
import from minrep.mlb;
DEF_MIN_REP();


macro VEC_COMPARE_MAX_REP(N)
.if (NMPP_MIN_REP <= N);
		rep N ram=[ar0++gr0];
		rep N data=[ar1++gr1]	with ram-data;
	delayed return;
		rep N 					with activate afifo;
		rep N data=[ar3++gr3]	with mask afifo,data,ram;			
		rep N [ar6++gr6]= afifo;
	nul;
	nul;
.endif;
end   VEC_COMPARE_MAX_REP;

CompareMax_rep0:label;

    //------------------------------------------------------------------------
    //! \fn void void vec_CompareMaxV(nmreg nb1, nmreg f1cr, nmreg ar0, nmreg gr0, nmreg ar1, nmreg gr1, nmreg ar3, nmreg gr3, nmreg gr5, nmreg ar6, nmreg gr6);
    //!
    //------------------------------------------------------------------------

global vec_CompareMax :label;
<vec_CompareMax>
.branch;
	push ar2,gr2 with gr2=gr5<<27 ;
	push ar5,gr5 with gr5>>=5;
	ar3 = ar1 with gr3=gr1 noflags;
	if =0 delayed goto CompareMax_repN with gr2>>=24;
		ar2 = CompareMax_rep0 with gr5--;
	<next_CompareMax_rep32>
		rep 32 ram=[ar0++gr0];
		rep 32 data=[ar1++gr1]	with ram-data;
		rep 32					with activate afifo;
		rep 32 data=[ar3++gr3]	with mask afifo,data,ram;			
	if <>0 delayed  goto next_CompareMax_rep32 with gr5--;
		nul;
		rep 32 [ar6++gr6]= afifo;
	<CompareMax_repN>
	ar2+=gr2;
	delayed goto ar2; 
		pop ar5,gr5;
		pop ar2,gr2;
	<CompareMax_rep0>
	delayed return;
		nul;
		nul;
		nul;
	nul;nul;nul;nul;
	VEC_COMPARE_MAX_REP(1);
	VEC_COMPARE_MAX_REP(2);
	VEC_COMPARE_MAX_REP(3);
	VEC_COMPARE_MAX_REP(4);
	VEC_COMPARE_MAX_REP(5);
	VEC_COMPARE_MAX_REP(6);
	VEC_COMPARE_MAX_REP(7);
	VEC_COMPARE_MAX_REP(8);
	VEC_COMPARE_MAX_REP(9);
	VEC_COMPARE_MAX_REP(10);
	VEC_COMPARE_MAX_REP(11);
	VEC_COMPARE_MAX_REP(12);
	VEC_COMPARE_MAX_REP(13);
	VEC_COMPARE_MAX_REP(14);
	VEC_COMPARE_MAX_REP(15);
	VEC_COMPARE_MAX_REP(16);
	VEC_COMPARE_MAX_REP(17);
	VEC_COMPARE_MAX_REP(18);
	VEC_COMPARE_MAX_REP(19);
	VEC_COMPARE_MAX_REP(20);
	VEC_COMPARE_MAX_REP(21);
	VEC_COMPARE_MAX_REP(22);
	VEC_COMPARE_MAX_REP(23);
	VEC_COMPARE_MAX_REP(24);
	VEC_COMPARE_MAX_REP(25);
	VEC_COMPARE_MAX_REP(26);
	VEC_COMPARE_MAX_REP(27);
	VEC_COMPARE_MAX_REP(28);
	VEC_COMPARE_MAX_REP(29);
	VEC_COMPARE_MAX_REP(30);
	VEC_COMPARE_MAX_REP(31);
.wait;




end ".text_nmvcore";
