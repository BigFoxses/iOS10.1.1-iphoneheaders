/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, EDWorksheet, EDReference, NSString;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {

	EDResources* mResources;
	EDWorksheet* mWorksheet;
	int mWidth;
	BOOL mHidden;
	EDReference* mRange;
	unsigned long long mStyleIndex;
	unsigned char mOutlineLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)description;
-(long long)key;
-(id)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(id)arg1 ;
-(double)width;
-(id)range;
-(void)setWidth:(double)arg1 ;
-(void)setRange:(id)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleIndex;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(void)setWidthInXlUnits:(int)arg1 ;
-(void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2 ;
-(void)setOutlineLevel:(unsigned char)arg1 ;
-(int)widthInXlUnits;
-(unsigned char)outlineLevel;
@end
