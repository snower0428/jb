/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PBMessage_Builder <NSObject>
-(id)clear;
-(id)build;
-(id)buildPartial;
-(id)clone;
-(BOOL)isInitialized;
-(id)defaultInstance;
-(id)unknownFields;
-(id)setUnknownFields:(id)fields;
-(id)mergeUnknownFields:(id)fields;
-(id)mergeFromCodedInputStream:(id)codedInputStream;
-(id)mergeFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry;
-(id)mergeFromData:(id)data;
-(id)mergeFromData:(id)data extensionRegistry:(id)registry;
-(id)mergeFromInputStream:(id)inputStream;
-(id)mergeFromInputStream:(id)inputStream extensionRegistry:(id)registry;
@end

