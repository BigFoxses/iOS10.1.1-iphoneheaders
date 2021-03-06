/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UASharedPasteboardDataManager : NSObject {

	NSString* _currentLocalBlobPath;
	NSString* _currentRemoteBlobPath;

}

@property (retain) NSString * currentLocalBlobPath;               //@synthesize currentLocalBlobPath=_currentLocalBlobPath - In the implementation block
@property (retain) NSString * currentRemoteBlobPath;              //@synthesize currentRemoteBlobPath=_currentRemoteBlobPath - In the implementation block
+(id)sharedInstance;
-(id)createSharedDataDirectory;
-(id)sharedDataPath;
-(NSString *)currentLocalBlobPath;
-(void)setCurrentLocalBlobPath:(NSString *)arg1 ;
-(id)createFileForUUID:(id)arg1 ;
-(NSString *)currentRemoteBlobPath;
-(void)setCurrentRemoteBlobPath:(NSString *)arg1 ;
-(id)createFileForLocalPasteboardBlob;
-(id)localPasteboardBlobForReading;
-(id)createFileForRemotePasteboardBlob;
-(id)remotePasteboardBlobForReading;
-(id)init;
@end

