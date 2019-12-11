/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Connection.h>
#import <Message/Message-Structs.h>

@class NSMutableArray, NSString, MFSMTPResponse, NSMutableData;

@interface MFSMTPConnection : Connection {
	MFSMTPResponse *_lastResponse;	// 72 = 0x48
	NSMutableArray *_serviceExtensions;	// 76 = 0x4c
	NSMutableData *_mdata;	// 80 = 0x50
	NSString *_domainName;	// 84 = 0x54
	NSString *_saveSentMbox;	// 88 = 0x58
	int _originalSocketTimeout;	// 92 = 0x5c
	int _lastCommandTimestamp;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
	BOOL _hideLoggedData;	// 104 = 0x68
	BOOL _useSaveSent;	// 105 = 0x69
	BOOL _dislikesSaveSentMbox;	// 106 = 0x6a
}
@property(retain) NSString *domainName;	// G=0x399a5; S=0x3cf6d; converted property
@property(readonly, retain) MFSMTPResponse *lastResponse;	// G=0x3cfc1; converted property
- (id)init;	// 0x399c5
- (void)setDelegate:(id)delegate;	// 0x39995
- (void)dealloc;	// 0x3d041
- (int)state;	// 0x3cff9
// converted property getter: - (id)lastResponse;	// 0x3cfc1
// converted property getter: - (id)domainName;	// 0x399a5
// converted property setter: - (void)setDomainName:(id)name;	// 0x3cf6d
- (BOOL)supportsOutboxCopy;	// 0x3cf0d
- (BOOL)supportsPipelining;	// 0x3ceed
- (BOOL)supports8BitMime;	// 0x3ce81
- (BOOL)supportsBinaryMime;	// 0x3ce15
- (BOOL)supportsEnhancedStatusCodes;	// 0x3cdf5
- (BOOL)supportsChunking;	// 0x3cd89
- (unsigned long long)maximumMessageBytes;	// 0x3cc31
- (id)authenticationMechanisms;	// 0x3cb39
- (BOOL)authenticateUsingAccount:(id)account;	// 0x3caed
- (BOOL)authenticateUsingAccount:(id)account authenticator:(id)authenticator;	// 0x3c52d
- (BOOL)connectUsingAccount:(id)account;	// 0x3c17d
- (int)mailFrom:(id)from;	// 0x3c0e9
- (int)rcptTo:(id)to;	// 0x3c099
- (int)noop;	// 0x3c055
- (int)sendBData:(id)data;	// 0x3bd91
- (int)sendData:(id)data;	// 0x3b9a5
- (int)quit;	// 0x3b95d
- (void)abort;	// 0x3b94d
- (id)dataForMailFrom:(id)from;	// 0x3b8cd
- (id)dataForRcptTo:(id)to;	// 0x3b895
- (id)dataForDataCmd;	// 0x3b869
- (int)mailFrom:(id)from recipients:(id)recipients withData:(id)data host:(id)host errorMessage:(id *)message serverResponse:(id *)response displayError:(BOOL *)error errorCode:(int *)code;	// 0x3ace1
- (long)timeLastCommandWasSent;	// 0x399b5
- (int)_sendBytes:(const char *)bytes length:(unsigned)length;	// 0x3ac6d
- (int)_sendData:(id)data;	// 0x3ac19
- (id)_dataForCommand:(const char *)command length:(unsigned)length argument:(id)argument trailer:(const char *)trailer;	// 0x3a9dd
- (int)_sendCommand:(const char *)command length:(unsigned)length argument:(id)argument trailer:(const char *)trailer;	// 0x3a931
- (int)_getReply;	// 0x3a75d
- (int)_readResponseRange:(NSRange *)range isContinuation:(BOOL *)continuation;	// 0x3a5c5
- (BOOL)_connectUsingAccount:(id)account;	// 0x3a3a9
- (int)_doHandshakeUsingAccount:(id)account;	// 0x39d89
- (BOOL)_hasParameter:(id)parameter forKeyword:(id)keyword;	// 0x39ca9
- (BOOL)_supportsExtension:(id)extension;	// 0x39c1d
- (void)_setLastResponse:(id)response;	// 0x39bd5
- (id)lastResponseLine;	// 0x39ad1
- (BOOL)_supportsSaveSentExtension;	// 0x39ab1
- (void)setUseSaveSent:(BOOL)sent toFolder:(id)folder;	// 0x39a35
@end