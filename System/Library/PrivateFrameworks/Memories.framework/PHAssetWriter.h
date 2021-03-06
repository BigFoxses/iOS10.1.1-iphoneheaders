/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetRepresentation, NSURL;

@interface PHAssetWriter : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _stop;
	PHAssetRepresentation* _assetRepresentation;
	NSURL* _destinationURL;
	NSURL* _sourceUrl;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PHAssetRepresentation * assetRepresentation;              //@synthesize assetRepresentation=_assetRepresentation - In the implementation block
@property (nonatomic,retain) NSURL * sourceUrl;                                        //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (assign) BOOL stop;                                                          //@synthesize stop=_stop - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL networkAccessAllowed;                                //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
+(id)assetWriterForIdentifierURL:(id)arg1 ;
+(id)assetWriterForAssetRepresentation:(id)arg1 ;
-(id)request;
-(BOOL)stop;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)initWithSourceURL:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(id)transfer;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(void)setAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(id)write;
-(void)setStop:(BOOL)arg1 ;
-(void)startWritingWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PHAssetRepresentation *)assetRepresentation;
-(BOOL)networkAccessAllowed;
-(void)stopWriting;
@end

