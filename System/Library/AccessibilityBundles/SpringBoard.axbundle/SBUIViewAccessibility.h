/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/__SBUIViewAccessibility_super.h>

@interface SBUIViewAccessibility : __SBUIViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_axIsDividerForOverlay;
-(BOOL)_axPerformGestureForAction:(id)arg1 ;
-(void)_axAddCustomActionWithName:(id)arg1 gesture:(unsigned long long)arg2 toArray:(id)arg3 ;
-(id)accessibilityHint;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(BOOL)_accessibilityOverridesInvalidFrames;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilityPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
