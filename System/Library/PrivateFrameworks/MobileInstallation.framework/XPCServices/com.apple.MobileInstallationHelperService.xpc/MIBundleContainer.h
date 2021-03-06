/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.MobileInstallationHelperService/MIContainer.h>

@class MIExecutableBundle;

@interface MIBundleContainer : MIContainer {

	MIExecutableBundle* _bundle;

}

@property (nonatomic,readonly) MIExecutableBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned bundleMaxLinkedSDKVersion; 
+(id)appBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
+(id)vpnPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
+(id)pluginKitPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
+(id)tempAppBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)tempVPNPluginBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)updateSinfDataForAppWithIdentifier:(id)arg1 sinfData:(id)arg2 error:(id*)arg3 ;
+(BOOL)updateiTunesMetadataForAppWithIdentifier:(id)arg1 plistData:(id)arg2 error:(id*)arg3 ;
-(BOOL)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 withError:(id*)arg3 ;
-(BOOL)captureBundleByMoving:(id)arg1 withError:(id*)arg2 ;
-(unsigned)bundleMaxLinkedSDKVersion;
-(MIExecutableBundle *)bundle;
-(id)initWithContainer:(id)arg1 ;
@end

