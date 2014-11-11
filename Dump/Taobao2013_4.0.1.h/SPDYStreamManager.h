//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class SPDYStreamNode;

@interface SPDYStreamManager : NSObject <NSFastEnumeration>
{
    SPDYStreamNode *_priorityHead[8];
    SPDYStreamNode *_priorityLast[8];
    struct __CFDictionary *_nodesByStreamId;
    struct __CFDictionary *_nodesByProtocol;
    unsigned int _localCount;
    unsigned int _remoteCount;
    unsigned long _mutations;
}

@property(readonly, nonatomic) unsigned int remoteCount; // @synthesize remoteCount=_remoteCount;
@property(readonly, nonatomic) unsigned int localCount; // @synthesize localCount=_localCount;
- (void).cxx_destruct;
- (void)removeAllStreams;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)_removeListNode:(id)arg1;
- (void)removeStreamForProtocol:(id)arg1;
- (void)removeStreamWithStreamId:(unsigned int)arg1;
- (void)_addListNode:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)addStream:(id)arg1;
- (id)nextPriorityStream;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int count;
- (void)dealloc;
- (id)init;

@end
