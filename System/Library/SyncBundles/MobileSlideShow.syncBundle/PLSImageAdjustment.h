/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface PLSImageAdjustment : NSObject <NSCoding> {

	NSNumber* _rotation;

}

@property (nonatomic,retain) NSNumber * rotation;              //@synthesize rotation=_rotation - In the implementation block
+(id)imageAdjustment;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setRotation:(NSNumber *)arg1 ;
-(NSNumber *)rotation;
@end

