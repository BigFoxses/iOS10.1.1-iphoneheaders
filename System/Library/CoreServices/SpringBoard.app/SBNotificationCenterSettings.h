/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class SBBounceSettings;

@interface SBNotificationCenterSettings : SBUISettings {

	SBBounceSettings* _bounceSettings;
	double _grabberAnimationDuration;
	double _actionButtonVibrantTintLevel;
	double _actionButtonVibrantTintAlpha;
	double _actionButtonSelectedVibrantTintLevel;
	double _actionButtonSelectedVibrantTintAlpha;
	double _actionButtonOverlayTintLevel;
	double _actionButtonOverlayTintAlpha;
	double _actionButtonSelectedOverlayTintLevel;
	double _actionButtonSelectedOverlayTintAlpha;
	double _modeButtonTintLevel;
	double _modeButtonTintAlpha;
	double _modeLabelTintLevel;
	double _modeLabelTintAlpha;

}

@property (nonatomic,retain) SBBounceSettings * bounceSettings;                        //@synthesize bounceSettings=_bounceSettings - In the implementation block
@property (assign) double grabberAnimationDuration;                                    //@synthesize grabberAnimationDuration=_grabberAnimationDuration - In the implementation block
@property (assign,nonatomic) double actionButtonVibrantTintLevel;                      //@synthesize actionButtonVibrantTintLevel=_actionButtonVibrantTintLevel - In the implementation block
@property (assign,nonatomic) double actionButtonVibrantTintAlpha;                      //@synthesize actionButtonVibrantTintAlpha=_actionButtonVibrantTintAlpha - In the implementation block
@property (assign,nonatomic) double actionButtonSelectedVibrantTintLevel;              //@synthesize actionButtonSelectedVibrantTintLevel=_actionButtonSelectedVibrantTintLevel - In the implementation block
@property (assign,nonatomic) double actionButtonSelectedVibrantTintAlpha;              //@synthesize actionButtonSelectedVibrantTintAlpha=_actionButtonSelectedVibrantTintAlpha - In the implementation block
@property (assign,nonatomic) double actionButtonOverlayTintLevel;                      //@synthesize actionButtonOverlayTintLevel=_actionButtonOverlayTintLevel - In the implementation block
@property (assign,nonatomic) double actionButtonOverlayTintAlpha;                      //@synthesize actionButtonOverlayTintAlpha=_actionButtonOverlayTintAlpha - In the implementation block
@property (assign,nonatomic) double actionButtonSelectedOverlayTintLevel;              //@synthesize actionButtonSelectedOverlayTintLevel=_actionButtonSelectedOverlayTintLevel - In the implementation block
@property (assign,nonatomic) double actionButtonSelectedOverlayTintAlpha;              //@synthesize actionButtonSelectedOverlayTintAlpha=_actionButtonSelectedOverlayTintAlpha - In the implementation block
@property (assign,nonatomic) double modeButtonTintLevel;                               //@synthesize modeButtonTintLevel=_modeButtonTintLevel - In the implementation block
@property (assign,nonatomic) double modeButtonTintAlpha;                               //@synthesize modeButtonTintAlpha=_modeButtonTintAlpha - In the implementation block
@property (assign,nonatomic) double modeLabelTintLevel;                                //@synthesize modeLabelTintLevel=_modeLabelTintLevel - In the implementation block
@property (assign,nonatomic) double modeLabelTintAlpha;                                //@synthesize modeLabelTintAlpha=_modeLabelTintAlpha - In the implementation block
+(id)settingsControllerModule;
-(SBBounceSettings *)bounceSettings;
-(double)grabberAnimationDuration;
-(void)setGrabberAnimationDuration:(double)arg1 ;
-(void)setBounceSettings:(SBBounceSettings *)arg1 ;
-(double)actionButtonVibrantTintLevel;
-(void)setActionButtonVibrantTintLevel:(double)arg1 ;
-(double)actionButtonVibrantTintAlpha;
-(void)setActionButtonVibrantTintAlpha:(double)arg1 ;
-(double)actionButtonSelectedVibrantTintLevel;
-(void)setActionButtonSelectedVibrantTintLevel:(double)arg1 ;
-(double)actionButtonSelectedVibrantTintAlpha;
-(void)setActionButtonSelectedVibrantTintAlpha:(double)arg1 ;
-(double)actionButtonOverlayTintLevel;
-(void)setActionButtonOverlayTintLevel:(double)arg1 ;
-(double)actionButtonOverlayTintAlpha;
-(void)setActionButtonOverlayTintAlpha:(double)arg1 ;
-(double)actionButtonSelectedOverlayTintLevel;
-(void)setActionButtonSelectedOverlayTintLevel:(double)arg1 ;
-(double)actionButtonSelectedOverlayTintAlpha;
-(void)setActionButtonSelectedOverlayTintAlpha:(double)arg1 ;
-(double)modeButtonTintLevel;
-(void)setModeButtonTintLevel:(double)arg1 ;
-(double)modeButtonTintAlpha;
-(void)setModeButtonTintAlpha:(double)arg1 ;
-(double)modeLabelTintLevel;
-(void)setModeLabelTintLevel:(double)arg1 ;
-(double)modeLabelTintAlpha;
-(void)setModeLabelTintAlpha:(double)arg1 ;
-(void)setDefaultValues;
@end

