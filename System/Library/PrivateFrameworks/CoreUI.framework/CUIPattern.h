/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIPattern : NSObject {

	CGImageRef _patternImage;
	CGPatternRef _pattern;
	double _alpha;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(CGPatternRef)_newPattern;
-(id)initWithImageRef:(CGImageRef)arg1 ;
-(void)setPatternInContext:(CGContextRef)arg1 ;
-(CGImageRef)patternImageRef;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(id)description;
-(double)alpha;
-(CGPatternRef)pattern;
@end

