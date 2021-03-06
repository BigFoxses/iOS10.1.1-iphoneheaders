/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NNMKMailboxItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding> {

	NSString* _subject;
	NSDate* _dateReceived;
	NSString* _preview;
	unsigned long long _status;
	NSString* _messageId;
	NSString* _accountId;
	NSString* _conversationId;
	NSString* _from;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _dateSent;
	NSString* _messageIdHeader;
	NSString* _notificationMessageId;

}

@property (nonatomic,retain) NSString * messageId;                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                          //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                     //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSString * from;                               //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSArray * to;                                  //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                                  //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSArray * bcc;                                 //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                             //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,retain) NSString * messageIdHeader;                    //@synthesize messageIdHeader=_messageIdHeader - In the implementation block
@property (nonatomic,retain) NSString * notificationMessageId;              //@synthesize notificationMessageId=_notificationMessageId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * subject;                            //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * preview;                            //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) unsigned long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_isOldMessageIdFormat:(id)arg1 ;
+(BOOL)messageHasMultipleRecipients:(id)arg1 ;
+(BOOL)isMessageURL:(id)arg1 ;
+(id)URLForMessageId:(id)arg1 ;
+(id)messageIdForURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setFrom:(NSString *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
-(NSString *)from;
-(NSArray *)to;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(NSArray *)cc;
-(void)setCc:(NSArray *)arg1 ;
-(NSArray *)bcc;
-(void)setBcc:(NSArray *)arg1 ;
-(NSDate *)dateSent;
-(NSDate *)dateReceived;
-(NSString *)conversationId;
-(void)setConversationId:(NSString *)arg1 ;
-(NSString *)preview;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setPreview:(NSString *)arg1 ;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setMessageIdHeader:(NSString *)arg1 ;
-(void)setNotificationMessageId:(NSString *)arg1 ;
-(NSString *)messageIdHeader;
-(NSString *)notificationMessageId;
-(BOOL)checkState:(unsigned long long)arg1 ;
-(void)addState:(unsigned long long)arg1 ;
-(void)removeState:(unsigned long long)arg1 ;
@end

