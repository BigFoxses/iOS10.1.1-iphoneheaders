/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

@interface GQDTNumberCell : GQDTCell {

	double mValue;
	GQDTComputedFormatSpec* mComputedFormat;

}
-(int)readAttributesForNumberCell:(xmlTextReaderRef)arg1 ;
-(int)readAttributesForNCell:(xmlTextReaderRef)arg1 ;
-(CFStringRef)createStringValue;
-(void)dealloc;
-(double)value;
@end

