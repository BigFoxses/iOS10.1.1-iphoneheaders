/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NTKEditOption : NSObject <NSSecureCoding>

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)optionsDescription;
+(CGSize)sizeForSwatchStyle:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(long long)swatchStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
@end

