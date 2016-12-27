/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {

	BOOL _overridesHostAppearance;
	NSExtension* _extension;
	NSUUID* _contextToken;

}

@property (nonatomic,retain) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL overridesHostAppearance;              //@synthesize overridesHostAppearance=_overridesHostAppearance - In the implementation block
@property (nonatomic,copy) NSUUID * contextToken;                         //@synthesize contextToken=_contextToken - In the implementation block
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(void)updateOverridesHostAppearance;
-(id<PKPlugIn>)plugin;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)overridesHostAppearance;
-(NSUUID *)contextToken;
-(void)setContextToken:(NSUUID *)arg1 ;
@end
