/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarStyle, LPCaptionBarPresentationProperties;

@interface LPHTMLCaptionBarComponent : LPHTMLComponent {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;
	BOOL _useProgressSpinner;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(BOOL)arg3 themePath:(id)arg4 generator:(id)arg5 ;
@end

