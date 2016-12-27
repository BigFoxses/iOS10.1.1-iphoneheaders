/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <MapsLockScreen/MapsTheming.h>

@class NSString;

@interface MapsThemeButton : UIButton <MapsTheming> {

	/*^block*/id _imageProvider;
	/*^block*/id _titleColorProvider;
	/*^block*/id _tintColorProvider;

}

@property (nonatomic,copy) id imageProvider;                        //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) id titleColorProvider;                   //@synthesize titleColorProvider=_titleColorProvider - In the implementation block
@property (nonatomic,copy) id tintColorProvider;                    //@synthesize tintColorProvider=_tintColorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleColorProvider;
-(id)tintColorProvider;
-(void)_updateTitleColor;
-(void)setTitleColorProvider:(id)arg1 ;
-(void)updateTheme;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateTintColor;
-(void)setTintColorProvider:(id)arg1 ;
-(id)imageProvider;
-(void)setImageProvider:(id)arg1 ;
-(void)_updateImage;
@end
