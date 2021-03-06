/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeSimpleText : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	long long _maxDynamicFontSize;

}

@property (assign,nonatomic) long long maxDynamicFontSize;              //@synthesize maxDynamicFontSize=_maxDynamicFontSize - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(id)init;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setMaxDynamicFontSize:(long long)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(long long)maxDynamicFontSize;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
@end

