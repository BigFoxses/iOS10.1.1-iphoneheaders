/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PSListController;

@interface PSListContainerView : UIView {

	PSListController* _delegate;

}

@property (assign,nonatomic,__weak) PSListController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(PSListController *)arg1 ;
-(PSListController *)delegate;
-(void)layoutMarginsDidChange;
@end
