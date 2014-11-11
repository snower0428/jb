//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBJsonStreamWriterState;

@interface SBJsonStreamWriter : NSObject
{
    NSMutableDictionary *cache;
    BOOL humanReadable;
    BOOL sortKeys;
    NSString *error;
    unsigned int maxDepth;
    SBJsonStreamWriterState *state;
    NSMutableArray *stateStack;
    CDUnknownBlockType sortKeysComparator;
    id <SBJsonStreamWriterDelegate> delegate;
}

+ (void)initialize;
@property id <SBJsonStreamWriterDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType sortKeysComparator; // @synthesize sortKeysComparator;
@property BOOL sortKeys; // @synthesize sortKeys;
@property BOOL humanReadable; // @synthesize humanReadable;
@property(readonly, nonatomic) NSMutableArray *stateStack; // @synthesize stateStack;
@property(nonatomic) SBJsonStreamWriterState *state; // @synthesize state;
@property unsigned int maxDepth; // @synthesize maxDepth;
@property(copy) NSString *error; // @synthesize error;
- (void).cxx_destruct;
- (BOOL)writeNumber:(id)arg1;
- (BOOL)writeString:(id)arg1;
- (BOOL)writeValue:(id)arg1;
- (BOOL)writeBool:(BOOL)arg1;
- (BOOL)writeNull;
- (BOOL)writeArrayClose;
- (BOOL)writeArrayOpen;
- (BOOL)writeObjectClose;
- (BOOL)writeObjectOpen;
- (BOOL)writeArray:(id)arg1;
- (BOOL)writeObject:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;

@end

