/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface HFWallpaperSlice : NSObject <NSCopying> {

	long long _type;
	long long _variant;
	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(long long)type;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)variant;
-(id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4 ;
-(BOOL)isSlicedFromWallpaper:(id)arg1 ;
@end

