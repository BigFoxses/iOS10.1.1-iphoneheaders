/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSectionInfo, SBRowInfo;

@interface SBInfoOperand : NSObject {

	SBSectionInfo* _section;
	SBRowInfo* _row;

}

@property (nonatomic,readonly) SBSectionInfo * section;                                  //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) SBRowInfo * row;                                          //@synthesize row=_row - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) BOOL sectionOperand; 
+(id)operandWithSection:(id)arg1 row:(id)arg2 ;
-(BOOL)isSectionOperand;
-(id)initWithSection:(id)arg1 row:(id)arg2 ;
-(SBRowInfo *)row;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SBSectionInfo *)section;
@end
