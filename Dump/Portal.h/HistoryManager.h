/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface HistoryManager : XXUnknownSuperclass {
	NSString* _applicationName;
	NSString* _filePath;
}
@property(retain, nonatomic) NSString* applicationName;
+(id)sharedManager;
-(void)addHistory:(id)history forControl:(id)control;
-(id)historyArrayOfControl:(id)control;
-(void)deleteFile;
-(id)filePath;
-(void)dealloc;
-(id)init;
@end
