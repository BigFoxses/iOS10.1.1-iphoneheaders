/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>

@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath {

	NSString* mExpression;

}

@property (copy) NSString * expression; 
+(id)animationPathWithKey:(id)arg1 andExpression:(id)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(NSString *)expression;
-(void)setExpression:(NSString *)arg1 ;
-(id)imprint;
@end
