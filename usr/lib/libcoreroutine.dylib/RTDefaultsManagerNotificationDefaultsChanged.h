/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification {

	NSArray* _updatedKeys;

}

@property (nonatomic,retain) NSArray * updatedKeys;              //@synthesize updatedKeys=_updatedKeys - In the implementation block
-(id)initWithUpdatedKeys:(id)arg1 ;
-(NSArray *)updatedKeys;
-(void)setUpdatedKeys:(NSArray *)arg1 ;
@end
