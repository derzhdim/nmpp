//------------------------------------------------------------------------
//
//  $Workfile:: vInit. $
//
//  ��������-��������� ����������
//
//  Copyright (c) RC Module Inc.
//
//  $Revision: 1.1 $      $Date: 2004/11/22 13:50:02 $
//
//! \if file_doc
//!
//! \file   vInit.h
//! \author ������ �������
//! \brief  ����������� ������� ������������� ��� ��������.
//!
//! \endif
//!
//------------------------------------------------------------------------
#ifndef _VINIT_H_INCLUDED_
#define _VINIT_H_INCLUDED_

#ifdef __cplusplus
		extern "C" {
#endif		

    /**
    \defgroup nmppsSet nmppsSet
    \ingroup vInit
    \brief
        \ru ������� ������������� ��������� ������� ���������� ���������. 
        \en Function of array initialization with a constant value.  
    
		\~
    
	\f[
        pVec[i]  =  nVal, 
    \f]
    
	\f[
        i = \overline{0 \ldots nSize-1}
    \f]
    
    \param nSize    
        \ru ������ ������� � ���������. 
        \en Size of vec in elements. 
		\~
    \param nVal     
        \ru ���������. �������� �������� nVal ������ �������������� ���� ��������������� �������. 
        \en A constant. Range of nVal must correspond to type of result vec
		\~
    \retval pVec    
        \ru �������������� ������. 
        \en The result vec. 
		\~
    \return \e void 
     
        
    \par
    \xmlonly
        <testperf>
	        <param> pVec </param> <values> L G </values>
	        <param> nVal </param> <values> n </values>
	        <param> nSize  </param> <values> 10240 </values>
        </testperf>
        <testperf>
	        <param> pVec </param> <values> G </values>
	        <param> nVal </param> <values> n </values>
	        <param> nSize  </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly
    */
    //! \{

void nmppsSet_8s(nm8s* pVec,  int8b nVal, int nSize);
void nmppsSet_16s(nm16s* pVec, int16b nVal, int nSize);
void nmppsSet_32s(nm32s* pVec, int32b nVal, int nSize);
void nmppsSet_64sp(nm64s* pVec, int64b* nVal, int nSize); 
__INLINE__ void nmppsSet_64s(nm64s* pVec, int64b  nVal, int nSize)  {nmppsSet_64sp((nm64s*) pVec, (int64b*)&nVal, nSize);}

__INLINE__ void nmppsSet_8u(nm8u* pVec,  uint8b nVal, int nSize)	{nmppsSet_8s((nm8s*) pVec,  (int8b)nVal, nSize);}
__INLINE__ void nmppsSet_16u(nm16u* pVec, uint16b nVal, int nSize)	{nmppsSet_16s((nm16s*) pVec, (int16b)nVal, nSize);}
__INLINE__ void nmppsSet_32u(nm32u* pVec, uint32b nVal, int nSize)	{nmppsSet_32s((nm32s*) pVec, (int32b)nVal, nSize);}
__INLINE__ void nmppsSet_64u(nm64u* pVec, uint64b  nVal, int nSize)	{nmppsSet_64s((nm64s*) pVec, (int64b)nVal, nSize);}
__INLINE__ void nmppsSet_64up(nm64u* pVec, uint64b* nVal, int nSize)	{nmppsSet_64sp((nm64s*) pVec, (int64b*)nVal, nSize);}


    //! \}


//*****************************************************************************

    /**
    \defgroup nmppsRand nmppsRand
    \ingroup vInit
    \brief
        \ru ������������� ������� ���������� �������. 
        \en Initialization of an array with random numbers. 
		\~
    \param nSize		
        \ru ������ �������. 
        \en Vector size. 
		\~
    \param nRandomize    
        \ru ������������ ����� ��� ������������� 
                            ���������� ��������� �����. 
        \en Arbitrary number for initialization 
                            of a random-number generator. 
		\~
    \retval pDstVec     
        \ru �������������� ������. 
        \en Result vec. 
		\~
    \return \e void
    
    \par
    \xmlonly
        <testperf> 
             <param> pDstVec </param> <values> L G </values>
             <param> nRandomize </param> <values> 1 </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pDstVec </param> <values> G </values>
             <param> nRandomize </param> <values> 1 </values>
             <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly
    */
    //! \{
/**
	/ru  ������������� ������� 32-���������� ���������� �������. 
	/en Random initialization of 32-bit buffer
	/~
*/
//void nmppsRand_32u(nm32u* pDstVec, int nSize, unsigned nRandomize );
void nmppsRand_64s(nm64s* pDstVec, int nSize, int nRandomize );
__INLINE__ void nmppsRand_8s (nm8s* pDstVec,  int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>3, nRandomize);}
__INLINE__ void nmppsRand_16s(nm16s* pDstVec, int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>2, nRandomize);}
__INLINE__ void nmppsRand_32s(nm32s* pDstVec, int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>1, nRandomize);}
__INLINE__ void nmppsRand_8u (nm8u* pDstVec,  int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>3, nRandomize);}
__INLINE__ void nmppsRand_16u(nm16u* pDstVec, int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>2, nRandomize);}
__INLINE__ void nmppsRand_32u(nm32u* pDstVec, int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize>>1, nRandomize);}
__INLINE__ void nmppsRand_64u(nm64u* pDstVec, int nSize, unsigned nRandomize ) {nmppsRand_64s((nm64s*)pDstVec,  nSize   , nRandomize);}

//__INLINE__ void nmppsRand_64s(nm64s* pDstVec, int nSize, unsigned nRandomize = 1) {nmppsRand_32u((nm32u*)pDstVec,  nSize<<1, nRandomize);}

/**
	/ru  ������������� ������� 64-���������� ���������� �������. 
	/en Random initialization of 64-bit buffer
	/~

*/

    //! \}

	

//*****************************************************************************

    /**
    \defgroup nmppsRand_ nmppsRand_
    \ingroup vInit
    \brief 
        \ru ��������� ���������� ����� � ����������� ��c�����������.
        \en Random number generation with uniform distribution.

		\~
	  \~
    \param nMin		
        \ru ����������� ��������� �������� ���������� �����.
        \en Minimal value for random number.
		\~
    \param nMax    
        \ru ������������ ��������� �������� ���������� �����.
        \en Maximal value for random number.
		\~
    \param nDivisible     
        \ru ��������, �������� ����� ������ ��������� �����.
        \en Random number will be divisible by this value.
		\~
    \return \e int
		\ru ��������� ����� � ��������� ���� [nMin, nMax]. ��� ������� ��� ����������
			������ �������� [-2^31; 2^31-1].
        \en Random number in range [nMin, nMax]. For function without parameters
			this range is [-2^31; 2^31-1].

		\~
    \par
    \xmlonly
        <testperf>
          <param> nMin </param> <values> 0 128 		</values>
          <param> nMax  </param> <values> 10240 </values>
          <param> nDivisible </param> <values> 1 </values>
          <size> 1 </size>
        </testperf>
        <testperf>
          <param> nMin </param> <values> 128 		</values>
          <param> nMax  </param> <values> 1024 10240 </values>
          <param> nDivisible </param> <values> 1 </values>
          <size> 1 </size>
        </testperf>
        <testperf>
          <param> nMin </param> <values> 128 		</values>
          <param> nMax  </param> <values> 10240 </values>
          <param> nDivisible </param> <values> 1 2 </values>
          <size> 1 </size>
        </testperf>

    \endxmlonly
    */
    //! \{
int nmppsRand2_32s(int nMin, int nMax, int nDivisible);
int nmppsRand3_32s(int nMin, int nMax);
int nmppsRand();

    //! \}

	
//*****************************************************************************

    /**
    \defgroup nmppsRamp_ nmppsRamp_
    \ingroup vInit
    \brief
        \ru ������������� ������� ���������� �������������� ����������. 
        \en Initialization of an array by ramped numbers. 
    
		\~
    
	\f[
        pVec[i] = nOffset + nSlope \cdot i
    \f]
    
	\f[
        i = \overline{0 \ldots nSize-1}
    \f]
    
    \~
    \param nOffset		
        \ru ������ ���� �������������� ����������.
        \en Init value.
		\~
    \param nSlope		
        \ru �������� �������������� ����������.
        \en Common difference.
		\~
    \param nSize		
        \ru ������ �������. 
        \en Vector size. 
		\~
    \retval pVec     
        \ru �������������� ������. 
        \en Result array. 
		\~
    \return \e void


    \par
    \xmlonly
        <testperf> 
             <param> pVec </param> <values> L G </values>
             <param> nOffset </param> <values> 10 </values>
             <param> nSlope </param> <values> 2 </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pVec </param> <values> G </values>
             <param> nOffset </param> <values> -10 10 </values>
             <param> nSlope </param> <values> 2 </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pVec </param> <values> G </values>
             <param> nOffset </param> <values> 10 </values>
             <param> nSlope </param> <values> -2 2 </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pVec </param> <values> G </values>
             <param> nOffset </param> <values> 10 </values>
             <param> nSlope </param> <values> 2 </values>
             <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly
    */
    //! \{
void nmppsRamp_8s(nm8s* pVec,  int8b nOffset,  int8b nSlope, int nSize);
void nmppsRamp_16s(nm16s* pVec, int16b nOffset, int16b nSlope, int nSize);
void nmppsRamp_32s(nm32s* pVec, int32b nOffset, int32b nSlope, int nSize);
void nmppsRamp_64s(nm64s* pVec, int64b nOffset, int64b nSlope, int nSize);
    //! \}

//*****************************************************************************

    /**
    \defgroup nmppsCnv nmppsCnv
    \ingroup vInit
    \brief
        \ru ��������� ����������� ��������� �������. 
        \en Change of vec elements word-length. 
    
		\~
        \ru �������������� �������� ������ � ������� ����������� �������������� 
	        ������������� ������� �����.
	        �������������� �������� ������ � ������� ����������� �������������� 
	        c ���������������� ����� �������� (���������) ����.
            �������������� ����������� ������ � ������� ����������� �������������� 
	        ����������� ����� ������� ������� �����. 
        \en Signed data are converted to lesser word-length is made by means of 
            the most significant bits truncation.
            Signed data are converted to greater word-length is made with
            left expansion of the most significant (sign) bit.
            Unsigned data are converted to greater word-length is made by means of
            addition of the most significant zero bits on the left. 
		\~
    \param pSrcVec  
        \ru ������� ������. 
        \en Input vec. 
		\~
    \param nSize    
        \ru ������ �������� � ���������. 
        \en Vector size in elements. 
		\~
    \retval pDstVec 
        \ru �������������� ������. 
        \en The result vec. 
		\~
    \return \e void 
    
        
    \par
    \xmlonly
        <testperf> 
             <param> pSrcVec </param> <values> L G </values>
             <param> pDstVec </param> <values> L G </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pSrcVec </param> <values> L </values>
             <param> pDstVec </param> <values> G </values>
             <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly



    */
	//todo Impelenment NM versin of void nmppsCnv_32s(nm32s *pSrcVec, nm4s *pDstVec, int nSize);
    //! \{

/**
 \restr nSize =[32*64,32*64*2,32*64*3,....]
*/
void nmppsCnv_1s2s (nm1* pSrcVec, nm2s* pDstVec, int nSize);
/**
 \restr nSize =[32*64,32*64*2,32*64*3,....]
*/
void nmppsCnv_1u2u (nm1* pSrcVec, nm2u* pDstVec, int nSize);

void nmppsCnv_8s4s (nm8s* pSrcVec, nm4s*  pDstVec, int nSize);
void nmppsCnv_8s16s(nm8s* pSrcVec, nm16s* pDstVec, int nSize);
void nmppsCnv_8s32s(nm8s* pSrcVec, nm32s* pDstVec, int nSize);
void nmppsCnv_8s64s(nm8s* pSrcVec, nm64s* pDstVec, int nSize);
void nmppsCnv_8u16u(nm8u* pSrcVec, nm16u* pDstVec, int nSize);
void nmppsCnv_8u32u(nm8u* pSrcVec, nm32u* pDstVec, int nSize);
void nmppsCnv_8u64u(nm8u* pSrcVec, nm64u* pDstVec, int nSize);

void nmppsCnv_16s4s (nm16s* pSrcVec, nm4s* pDstVec, int nSize);
void nmppsCnv_16s8s (nm16s* pSrcVec, nm8s* pDstVec, int nSize);
void nmppsCnv_16s32s(nm16s* pSrcVec, nm32s* pDstVec, int nSize);
void nmppsCnv_16s64s(nm16s* pSrcVec, nm64s* pDstVec, int nSize);
void nmppsCnv_16u32u(nm16u* pSrcVec, nm32u* pDstVec, int nSize);
void nmppsCnv_16u64u(nm16u* pSrcVec, nm64u* pDstVec, int nSize);

void nmppsCnv_32s8s (nm32s* pSrcVec, nm8s* pDstVec, int nSize);
void nmppsCnv_32s16s(nm32s* pSrcVec, nm16s* pDstVec, int nSize);
void nmppsCnv_32s64s(nm32s* pSrcVec, nm64s* pDstVec, int nSize);
void nmppsCnv_32u64u(nm32u* pSrcVec, nm64u* pDstVec, int nSize);
				 
void nmppsCnv_64s32s(nm64s* pSrcVec, nm32s* pDstVec, int nSize);
void nmppsCnv_64s16s(nm64s* pSrcVec, nm16s* pDstVec, int nSize);
    //! \}
//void nmppsCnv_32s(nm32s *pSrcVec, nm4s *pDstVec, int nSize);




	
//*****************************************************************************

    /**
    \defgroup nmppsCopy_ nmppsCopy_
    \ingroup vInit
    \brief
        \ru ����������� �������. 
        \en Vector copying. 
    
		\~
    
	\f[
        pDstVec[i]  =  pSrcVec[i],
    \f]
    
	\f[
        i = \overline{0 \ldots nSize-1}
    \f]
    
    \param pSrcVec  
        \ru ������� ������. 
        \en Input vec. 
		\~
    \param nSize    
        \ru ������ �������� � ���������. 
        \en Vector size in elements. 
		\~
    \retval pDstVec 
        \ru �������������� ������. 
        \en The result vec. 
		\~
    \return \e void
    
    \par
    \xmlonly
        <testperf> 
             <param> pSrcVec </param> <values> L G </values>
             <param> pDstVec </param> <values> L G </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pSrcVec </param> <values> L </values>
             <param> pDstVec </param> <values> G </values>
             <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly
    
        */
    //! \{
void nmppsCopy_8s (nm8s*  pSrcVec, nm8s*  pDstVec, int nSize);
void nmppsCopy_16s(nm16s* pSrcVec, nm16s* pDstVec, int nSize);
void nmppsCopy_32s(nm32s* pSrcVec, nm32s* pDstVec, int nSize);
void nmppsCopy_64s(nm64s* pSrcVec, nm64s* pDstVec, int nSize);

__INLINE__ void nmppsCopy_8u(nm8u*  pSrcVec, nm8u*  pDstVec, int nSize)  { nmppsCopy_8s (( nm8s*)  pSrcVec, (nm8s*)  pDstVec,  nSize);}
__INLINE__ void nmppsCopy_16u(nm16u* pSrcVec, nm16u* pDstVec, int nSize) { nmppsCopy_16s(( nm16s*) pSrcVec, (nm16s*) pDstVec,  nSize);}
__INLINE__ void nmppsCopy_32u(nm32u* pSrcVec, nm32u* pDstVec, int nSize) { nmppsCopy_32s(( nm32s*) pSrcVec, (nm32s*) pDstVec,  nSize);}
__INLINE__ void nmppsCopy_64u(nm64u* pSrcVec, nm64u* pDstVec, int nSize) { nmppsCopy_64s(( nm64s*) pSrcVec, (nm64s*) pDstVec,  nSize);}

    //! \}



//*****************************************************************************

    /**
    \defgroup nmppsCopyua_ nmppsCopyua_
    \ingroup vInit
    \brief
        \ru ����������� ������� � ������������� �������� ������� � �����������. 
        \en Copying a vec from an unaligned byte position to aligned one. 
    
		\~
    
	\f[
        pDstVec[i] = pSrcVec[nSrcOffset+i]
    \f]
    
	\f[
        i = \overline{0 \ldots nSize-1}
    \f]

	\ru ������� ����� ��������� ����������� ���� ��� ��������� � �������� 64�. ���� � ������. 
    \en Position is defined as aligned if it points to 64-bit words boundary in memory.
	
		\~
	\~
	\param pSrcVec      
        \ru ������� ������. 
        \en Input vec. 
		\~
    \param pDstVec      
        \ru �������������� ������. 
        \en Output vec. 
		\~
    \param nSrcOffset  
        \ru �������� � ��������� ������������ ������ �������. nSrcOffset ����� ��������� ����� ��������.
        \en Shift in elements relatively to the origin of the vec. nSrcOffset may be any. 
		\~
    \param nSize   
        \ru ���-�� ���������� ���������. 
        \en Number of elements being copied. 
		\~
    \return \e void
    
    \par
    \xmlonly
        <testperf> 
            <param> pSrcVec    </param> <values> L G </values>
            <param> pDstVec    </param> <values> L G </values>
            <param> nSrcOffset </param> <values> 3 </values>
            <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
            <param> pSrcVec    </param> <values> L </values>
            <param> pDstVec    </param> <values> G </values>
            <param> nSrcOffset </param> <values> 0 3 7 </values>
            <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
            <param> pSrcVec    </param> <values> L </values>
            <param> pDstVec    </param> <values> G </values>
            <param> nSrcOffset </param> <values> 3 </values>
            <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly

    */
    //! \{
void nmppsCopyua_8s(nm8s* pSrcVec, int nSrcOffset, nm8s* pDstVec,  int nSize);
    //! \}

//*****************************************************************************

    /**
    \defgroup nmppsSwap_ nmppsSwap_
    \ingroup vInit
    \brief
        \ru ������������ ���� ��������. 
        \en Swap of two vectors. 
    
 
		\~
    \param pSrcVec1  
        \ru ������ ������� ������. 
        \en The first input vec. 
		\~
    \param pSrcVec2  
        \ru ������ ������� ������. 
        \en The second input vec. 
		\~
    \param nSize     
        \ru ������ �������� � ���������. 
        \en Vector size in elements. 
		\~
    \return \e void
    
        
    \par
    \xmlonly
        <testperf> 
             <param> pSrcVec1 </param> <values> L G </values>
             <param> pSrcVec2 </param> <values> L G </values>
             <param> nSize </param> <values> 10240 </values>
        </testperf>
        <testperf> 
             <param> pSrcVec1 </param> <values> L </values>
             <param> pSrcVec2 </param> <values> G </values>
             <param> nSize </param> <values> 8 128 1024 10240 </values>
        </testperf>
    \endxmlonly
    
    */
    //! \{
void nmppsSwap_64s(nm64s* pSrcVec1, nm64s* pSrcVec2, int nSize);
    //! \}

#ifdef __cplusplus
		};
#endif
	
#endif // _INIT_H_INCLUDED_



