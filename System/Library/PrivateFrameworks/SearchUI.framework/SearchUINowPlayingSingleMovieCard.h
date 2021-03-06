/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/NUIContainerStackView.h>

@class SFPunchout;

@interface SearchUINowPlayingSingleMovieCard : NUIContainerStackView {

	SFPunchout* _punchout;

}

@property (retain) SFPunchout * punchout;              //@synthesize punchout=_punchout - In the implementation block
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(id)initWithMovie:(id)arg1 style:(unsigned long long)arg2 ;
-(void)tapOnMovie:(id)arg1 ;
@end

