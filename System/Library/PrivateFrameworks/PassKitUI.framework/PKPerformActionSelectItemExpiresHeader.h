/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface PKPerformActionSelectItemExpiresHeader : UIView {

	UILabel* _leadingLabel;
	UILabel* _trailingLabel;
	NSString* _leadingString;
	NSString* _trailingString;

}

@property (nonatomic,retain) NSString * leadingString;               //@synthesize leadingString=_leadingString - In the implementation block
@property (nonatomic,retain) NSString * trailingString;              //@synthesize trailingString=_trailingString - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setLeadingString:(NSString *)arg1 ;
-(void)setTrailingString:(NSString *)arg1 ;
-(NSString *)leadingString;
-(NSString *)trailingString;
@end

