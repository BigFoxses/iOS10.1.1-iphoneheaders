/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSPhysicalCirclesTemplate.h>

@protocol SKUIJSPhysicalCirclesTemplate <JSExport>
@required
-(void)afterDOMUpdate:(id)arg1;
-(void)performFinishAnimation:(id)arg1;
-(void)performResetAnimation:(id)arg1;

@end


@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {

	SKUIPhysicalCirclesTemplateDOMFeature* _feature;

}
-(id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2 ;
-(void)_performAnimationWithType:(long long)arg1 callback:(id)arg2 ;
-(void)afterDOMUpdate:(id)arg1 ;
-(void)performFinishAnimation:(id)arg1 ;
-(void)performResetAnimation:(id)arg1 ;
@end

