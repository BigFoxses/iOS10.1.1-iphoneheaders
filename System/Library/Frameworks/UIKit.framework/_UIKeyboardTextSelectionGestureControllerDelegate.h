/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;


@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@optional
-(BOOL)hasMarkedText;
-(double)timestampOfLastTouchesEnded;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;
-(void)setTwoFingerTapTimestamp:(double)arg1;
-(BOOL)transitionInProgress;
-(void)willBeginGesture;
-(void)didEndGesture;

@required
-(UIKeyboardTaskQueue *)taskQueue;
-(_UIKeyboardTextSelectionController *)textSelectionController;

@end

