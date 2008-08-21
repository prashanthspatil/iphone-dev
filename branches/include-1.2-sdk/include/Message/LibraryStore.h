/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MessageStore.h>

@class MessageCriterion, NSMutableArray, NSMutableSet;

@interface LibraryStore : MessageStore
{
    MessageCriterion *_criterion;
    double _lastUpdated;
    unsigned int _openOptions;
    NSMutableSet *_memberMessageIDs;
    unsigned int _messageAvailabilityCount;
    BOOL _mailboxUnreadCountUpdatePending;
    NSMutableArray *_allMessagesDuringOpening;
    unsigned int _serverMessageCount;
    unsigned int _serverUnreadCount;
}

+ (id)_storeCacheMapTable;	// IMP=0x30ba17d1
+ (BOOL)createEmptyStoreForPath:(id)fp8;	// IMP=0x30ba3281
+ (unsigned int)defaultLoadOptions;	// IMP=0x30ba17dd
+ (void)initialize;	// IMP=0x30ba1635
+ (id)sharedInstance;	// IMP=0x30ba1a51
+ (BOOL)storeAtPathIsWritable:(id)fp8;	// IMP=0x30ba32d9
+ (id)storeWithCriterion:(id)fp8;	// IMP=0x30ba19d1
+ (id)storeWithMailbox:(id)fp8;	// IMP=0x30ba1a11
- (id)URLString;	// IMP=0x30ba3239
- (void)_addInvocationToQueue:(id)fp8;	// IMP=0x30ba1ba9
- (id)_cachedBodyDataContainerForMessage:(id)fp8 valueIfNotPresent:(id)fp12;	// IMP=0x30ba3955
- (id)_cachedBodyDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;	// IMP=0x30ba38d9
- (id)_cachedBodyForMessage:(id)fp8 valueIfNotPresent:(id)fp12;	// IMP=0x30ba38ad
- (id)_cachedHeaderDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;	// IMP=0x30ba397d
- (id)_cachedHeadersForMessage:(id)fp8 valueIfNotPresent:(id)fp12;	// IMP=0x30ba38b1
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;	// IMP=0x30ba27bd
- (id)_fetchHeaderDataForMessage:(id)fp8;	// IMP=0x30ba2781
- (void)_flushAllCaches;	// IMP=0x30ba36c9
- (void)_flushAllMessageData;	// IMP=0x30ba3331
- (void)_handleFlagsChangedForMessages:(id)fp8 oldFlagsByMessage:(id)fp12;	// IMP=0x30ba3b25
- (void)_newMessagesAvailable:(id)fp8;	// IMP=0x30ba1b41
- (void)_rebuildTableOfContentsSynchronously;	// IMP=0x30ba346d
- (void)_setNeedsAutosave;	// IMP=0x30ba31ef
- (void)_updateMailboxUnreadCount;	// IMP=0x30ba1abd
- (void)addCountsForMessages:(id)fp8 shouldUpdateUnreadCount:(BOOL)fp12;	// IMP=0x30ba3c6d
- (BOOL)allowsAppend;	// IMP=0x30ba2f6d
- (int)appendMessages:(id)fp8 unsuccessfulOnes:(id)fp12 newMessageIDs:(id)fp16 newMessages:(id)fp20 flagsToSet:(id)fp24;	// IMP=0x30ba2f89
- (id)bodyDataForMessage:(id)fp8 isComplete:(char *)fp12 downloadIfNecessary:(BOOL)fp16;	// IMP=0x30ba2849
- (BOOL)canCompact;	// IMP=0x30ba30b1
- (void)compactMessages:(id)fp8;	// IMP=0x30ba314d
- (id)copyOfAllMessages;	// IMP=0x30ba2085
- (id)copyOfAllMessagesWithOptions:(unsigned int)fp8;	// IMP=0x30ba1fd5
- (id)copyOfMessagesInRange:(struct _NSRange)fp8 options:(unsigned int)fp16;	// IMP=0x30ba1e19
- (id)criterion;	// IMP=0x30ba31f1
- (id)dataForMimePart:(id)fp8 inRange:(struct _NSRange)fp12 isComplete:(char *)fp20;	// IMP=0x30ba3185
- (void)dealloc;	// IMP=0x30ba2709
- (void)deleteMessages:(id)fp8 moveToTrash:(BOOL)fp12;	// IMP=0x30ba29dd
- (void)deleteMessagesOlderThanNumberOfDays:(int)fp8 compact:(BOOL)fp12;	// IMP=0x30ba2e6d
- (void)doCompact;	// IMP=0x30ba30fd
- (id)filterMessagesByMembership:(id)fp8;	// IMP=0x30ba20d5
- (id)fullBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12 isComplete:(char *)fp16 downloadIfNecessary:(BOOL)fp20;	// IMP=0x30ba27dd
- (void)handleMessageFlagsChanged:(id)fp8;	// IMP=0x30ba2489
- (void)handleMessagesAdded:(id)fp8;	// IMP=0x30ba224d
- (void)handleMessagesCompacted:(id)fp8;	// IMP=0x30ba2581
- (unsigned int)indexOfMessage:(id)fp8;	// IMP=0x30ba29c5
- (id)initWithCriterion:(id)fp8;	// IMP=0x30ba1955
- (id)initWithCriterion:(id)fp8 mailbox:(id)fp12 readOnly:(BOOL)fp16;	// IMP=0x30ba17e9
- (id)initWithMailbox:(id)fp8;	// IMP=0x30ba19b9
- (id)initWithMailboxUid:(id)fp8 readOnly:(BOOL)fp12;	// IMP=0x30ba1975
- (void)libraryFinishedSendingMessages;	// IMP=0x30ba1cb1
- (id)mailbox;	// IMP=0x30ba1a5d
- (void)messageFlagsChanged:(id)fp8;	// IMP=0x30ba2441
- (id)messageForMessageID:(id)fp8;	// IMP=0x30ba274d
- (void)messagesAdded:(id)fp8;	// IMP=0x30ba2205
- (void)messagesCompacted:(id)fp8;	// IMP=0x30ba2539
- (void)messagesWereAdded:(id)fp8 forIncrementalLoading:(BOOL)fp12;	// IMP=0x30ba2349
- (id)mutableCopyOfAllMessages;	// IMP=0x30ba20a5
- (void)newMessagesAvailable:(id)fp8;	// IMP=0x30ba1c19
- (unsigned int)nonDeletedCount;	// IMP=0x30ba1de5
- (void)openAsynchronouslyWithOptions:(unsigned int)fp8;	// IMP=0x30ba1d25
- (void)openSynchronously;	// IMP=0x30ba1d49
- (void)purgeMessages:(id)fp8;	// IMP=0x30ba3a55
- (void)purgeMessagesBeyond:(unsigned int)fp8;	// IMP=0x30ba3a75
- (void)rebuildTableOfContentsAsynchronously;	// IMP=0x30ba338d
- (unsigned int)serverMessageCount;	// IMP=0x30ba1b15
- (unsigned int)serverUnreadCount;	// IMP=0x30ba1b29
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;	// IMP=0x30ba2f1d
- (void)setNumberOfAttachments:(unsigned int)fp8 isSigned:(BOOL)fp12 isEncrypted:(BOOL)fp16 forMessage:(id)fp20;	// IMP=0x30ba2f3d
- (BOOL)setPreferredEncoding:(unsigned long)fp8 forMessage:(id)fp12;	// IMP=0x30ba39a5
- (BOOL)shouldCancel;	// IMP=0x30ba1b3d
- (unsigned int)totalCount;	// IMP=0x30ba1db1
- (unsigned int)unreadCount;	// IMP=0x30ba330d
- (void)updateCriterionFromMailbox;	// IMP=0x30ba1a61
- (void)updateMetadata;	// IMP=0x30ba31eb
- (void)updateUserInfoToLatestValues;	// IMP=0x30ba31ed
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x30ba31e9

@end
