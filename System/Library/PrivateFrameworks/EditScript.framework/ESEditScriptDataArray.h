/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ESEditScriptData.h>

@class NSArray, NSString;

@interface ESEditScriptDataArray : NSObject <ESEditScriptData> {

	NSArray* _data;
	NSString* _cachedStringValue;

}

@property (nonatomic,retain) NSArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * cachedStringValue;              //@synthesize cachedStringValue=_cachedStringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)EditScriptDataWithArray:(id)arg1 ;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2 ;
-(NSString *)description;
-(long long)length;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1 ;
-(long long)characterIndexForItem:(long long)arg1 ;
-(id)stringAtIndex:(long long)arg1 ;
-(void)setCachedStringValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 chunkSize:(long long)arg2 ;
-(NSString *)cachedStringValue;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3 ;
@end
