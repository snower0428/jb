//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GCKPB_PBArray, GCKPB_PBGeneratedMessage, NSArray, NSData, NSString;

@protocol GCKPB_PBMessageSignatureProtocol

@optional
+ (id)getClassValue;
- (id)mergeClass:(id)arg1;
- (id)setClassBuilder:(id)arg1;
- (id)setArray:(GCKPB_PBArray *)arg1;
- (id)getArray;
- (void)addAllEnumValues:(NSArray *)arg1;
- (void)addEnumValue:(int)arg1;
- (int)replaceEnumAtIndex:(unsigned int)arg1 with:(int)arg2;
- (int)getEnumAtIndex:(unsigned int)arg1;
- (id)setEnum:(int)arg1;
- (int)getEnum;
- (void)addAllGroupValues:(NSArray *)arg1;
- (void)addGroupValue:(GCKPB_PBGeneratedMessage *)arg1;
- (GCKPB_PBGeneratedMessage *)replaceGroupAtIndex:(unsigned int)arg1 with:(GCKPB_PBGeneratedMessage *)arg2;
- (GCKPB_PBGeneratedMessage *)getGroupAtIndex:(unsigned int)arg1;
- (id)setGroup:(GCKPB_PBGeneratedMessage *)arg1;
- (GCKPB_PBGeneratedMessage *)getGroup;
- (void)addAllMessageValues:(NSArray *)arg1;
- (void)addMessageValue:(GCKPB_PBGeneratedMessage *)arg1;
- (GCKPB_PBGeneratedMessage *)replaceMessageAtIndex:(unsigned int)arg1 with:(GCKPB_PBGeneratedMessage *)arg2;
- (GCKPB_PBGeneratedMessage *)getMessageAtIndex:(unsigned int)arg1;
- (id)setMessage:(GCKPB_PBGeneratedMessage *)arg1;
- (GCKPB_PBGeneratedMessage *)getMessage;
- (void)addAllStringValues:(NSArray *)arg1;
- (void)addStringValue:(NSString *)arg1;
- (NSString *)replaceStringAtIndex:(unsigned int)arg1 with:(NSString *)arg2;
- (NSString *)getStringAtIndex:(unsigned int)arg1;
- (id)setString:(NSString *)arg1;
- (NSString *)getString;
- (void)addAllDataValues:(NSArray *)arg1;
- (void)addDataValue:(NSData *)arg1;
- (NSData *)replaceDataAtIndex:(unsigned int)arg1 with:(NSData *)arg2;
- (NSData *)getDataAtIndex:(unsigned int)arg1;
- (id)setData:(NSData *)arg1;
- (NSData *)getData;
- (void)addAllUInt64Values:(NSArray *)arg1;
- (void)addUInt64Value:(unsigned long long)arg1;
- (unsigned long long)replaceUInt64AtIndex:(unsigned int)arg1 with:(unsigned long long)arg2;
- (unsigned long long)getUInt64AtIndex:(unsigned int)arg1;
- (id)setUInt64:(unsigned long long)arg1;
- (unsigned long long)getUInt64;
- (void)addAllUInt32Values:(NSArray *)arg1;
- (void)addUInt32Value:(unsigned int)arg1;
- (unsigned int)replaceUInt32AtIndex:(unsigned int)arg1 with:(unsigned int)arg2;
- (unsigned int)getUInt32AtIndex:(unsigned int)arg1;
- (id)setUInt32:(unsigned int)arg1;
- (unsigned int)getUInt32;
- (void)addAllSInt64Values:(NSArray *)arg1;
- (void)addSInt64Value:(long long)arg1;
- (long long)replaceSInt64AtIndex:(unsigned int)arg1 with:(long long)arg2;
- (long long)getSInt64AtIndex:(unsigned int)arg1;
- (id)setSInt64:(long long)arg1;
- (long long)getSInt64;
- (void)addAllSInt32Values:(NSArray *)arg1;
- (void)addSInt32Value:(int)arg1;
- (int)replaceSInt32AtIndex:(unsigned int)arg1 with:(int)arg2;
- (int)getSInt32AtIndex:(unsigned int)arg1;
- (id)setSInt32:(int)arg1;
- (int)getSInt32;
- (void)addAllInt64Values:(NSArray *)arg1;
- (void)addInt64Value:(long long)arg1;
- (long long)replaceInt64AtIndex:(unsigned int)arg1 with:(long long)arg2;
- (long long)getInt64AtIndex:(unsigned int)arg1;
- (id)setInt64:(long long)arg1;
- (long long)getInt64;
- (void)addAllInt32Values:(NSArray *)arg1;
- (void)addInt32Value:(int)arg1;
- (int)replaceInt32AtIndex:(unsigned int)arg1 with:(int)arg2;
- (int)getInt32AtIndex:(unsigned int)arg1;
- (id)setInt32:(int)arg1;
- (int)getInt32;
- (void)addAllDoubleValues:(NSArray *)arg1;
- (void)addDoubleValue:(double)arg1;
- (double)replaceDoubleAtIndex:(unsigned int)arg1 with:(double)arg2;
- (double)getDoubleAtIndex:(unsigned int)arg1;
- (id)setDouble:(double)arg1;
- (double)getDouble;
- (void)addAllSFixed64Values:(NSArray *)arg1;
- (void)addSFixed64Value:(long long)arg1;
- (long long)replaceSFixed64AtIndex:(unsigned int)arg1 with:(long long)arg2;
- (long long)getSFixed64AtIndex:(unsigned int)arg1;
- (id)setSFixed64:(long long)arg1;
- (long long)getSFixed64;
- (void)addAllFixed64Values:(NSArray *)arg1;
- (void)addFixed64Value:(unsigned long long)arg1;
- (unsigned long long)replaceFixed64AtIndex:(unsigned int)arg1 with:(unsigned long long)arg2;
- (unsigned long long)getFixed64AtIndex:(unsigned int)arg1;
- (id)setFixed64:(unsigned long long)arg1;
- (unsigned long long)getFixed64;
- (void)addAllFloatValues:(NSArray *)arg1;
- (void)addFloatValue:(float)arg1;
- (float)replaceFloatAtIndex:(unsigned int)arg1 with:(float)arg2;
- (float)getFloatAtIndex:(unsigned int)arg1;
- (id)setFloat:(float)arg1;
- (float)getFloat;
- (void)addAllSFixed32Values:(NSArray *)arg1;
- (void)addSFixed32Value:(int)arg1;
- (int)replaceSFixed32AtIndex:(unsigned int)arg1 with:(int)arg2;
- (int)getSFixed32AtIndex:(unsigned int)arg1;
- (id)setSFixed32:(int)arg1;
- (int)getSFixed32;
- (void)addAllFixed32Values:(NSArray *)arg1;
- (void)addFixed32Value:(unsigned int)arg1;
- (unsigned int)replaceFixed32AtIndex:(unsigned int)arg1 with:(unsigned int)arg2;
- (unsigned int)getFixed32AtIndex:(unsigned int)arg1;
- (id)setFixed32:(unsigned int)arg1;
- (unsigned int)getFixed32;
- (void)addAllBoolValues:(NSArray *)arg1;
- (void)addBoolValue:(BOOL)arg1;
- (BOOL)replaceBoolAtIndex:(unsigned int)arg1 with:(BOOL)arg2;
- (BOOL)getBoolAtIndex:(unsigned int)arg1;
- (id)setBool:(BOOL)arg1;
- (BOOL)getBool;
@end

