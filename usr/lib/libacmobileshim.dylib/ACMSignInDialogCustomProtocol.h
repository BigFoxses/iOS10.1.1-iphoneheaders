/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSString, UIButton, UIBarButtonItem;


@protocol ACMSignInDialogCustomProtocol <ACMSignInDialogProtocol>
@property (nonatomic,retain) Class widgetClass; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL userNameFieldEditable; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton; 
@property (nonatomic,retain) UIBarButtonItem * signInBarButton; 
@property (nonatomic,retain) UIButton * cancelButton; 
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton; 
@required
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setCancelButton:(id)arg1;
-(UIButton *)cancelButton;
-(UIButton *)signInButton;
-(UIBarButtonItem *)signInBarButton;
-(UIBarButtonItem *)cancelBarButton;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1;
-(void)setSignInButton:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(Class)widgetClass;
-(void)setWidgetClass:(Class)arg1;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(void)setSignInBarButton:(id)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setCancelBarButton:(id)arg1;

@end

