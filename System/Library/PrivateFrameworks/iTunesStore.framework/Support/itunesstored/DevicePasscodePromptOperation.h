/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog;

@interface DevicePasscodePromptOperation : ISOperation {

	ISDialog* _dialog;
	/*^block*/id _tokenBlock;

}

@property (copy) id tokenBlock; 
-(id)tokenBlock;
-(void)dealloc;
-(void)run;
-(void)setTokenBlock:(id)arg1 ;
-(long long)_keyboardType;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
@end

