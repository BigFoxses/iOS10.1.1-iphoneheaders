/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
@required
-(BOOL)addSearchableItems:(id)arg1 error:(id*)arg2;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
-(void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 error:(id*)arg5;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 error:(id*)arg6;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 error:(id*)arg3;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(BOOL)clearCachesFully:(BOOL)arg1 error:(id*)arg2;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
-(BOOL)sendRTCLogs:(id*)arg1;
-(BOOL)drainQueueCompletely:(id*)arg1;
-(BOOL)removeAllStoredPseudoContacts:(id*)arg1;
-(BOOL)daemonExit:(id*)arg1;
-(BOOL)sleep:(id*)arg1;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)resetConfirmationAndRejectionHistory:(id*)arg1;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)drainQueueCompletelyWithCompletion:(/*^block*/id)arg1;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1;
-(void)daemonExitWithCompletion:(/*^block*/id)arg1;
-(void)sleepWithCompletion:(/*^block*/id)arg1;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;

@end

