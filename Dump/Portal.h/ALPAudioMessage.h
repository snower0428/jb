/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNumber, NSData;

@interface ALPAudioMessage : XXUnknownSuperclass {
@private
	NSString* _filePath;
	NSData* _audioData;
	NSString* _messageId;
	NSNumber* _audioTime;
	NSString* _createAt;
}
@property(retain, nonatomic) NSString* createAt;
@property(retain, nonatomic) NSNumber* audioTime;
@property(retain, nonatomic) NSString* messageId;
@property(retain, nonatomic) NSData* audioData;
@property(retain, nonatomic) NSString* filePath;
-(void).cxx_destruct;
-(BOOL)isExistFile:(id)file;
-(id)decodeAmr:(id)amr;
-(id)duration:(id)duration;
-(id)createMessageId;
-(id)initWithAudioData:(id)audioData;
-(id)initWithFilePath:(id)filePath;
@end

