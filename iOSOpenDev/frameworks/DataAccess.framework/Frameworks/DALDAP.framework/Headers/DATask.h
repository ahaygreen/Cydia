/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */




@protocol DATask <NSObject>
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;
- (void)finishWithError:(id)error;
- (void)performTask;
@optional
- (BOOL)shouldForceNetworking;
- (void)setTaskManager:(id)manager;
- (BOOL)shouldHoldPowerAssertion;
- (void)requestCancelTaskWithReason:(int)reason;
- (void)startModal;
@end
