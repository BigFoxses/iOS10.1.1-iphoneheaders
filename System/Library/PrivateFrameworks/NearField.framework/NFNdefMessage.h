/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface NFNdefMessage : NSObject <NSSecureCoding> {

	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSArray * records;              //@synthesize records=_records - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)asData;
-(id)decode;
@end

