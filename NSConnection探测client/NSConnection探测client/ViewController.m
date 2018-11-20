//
//  ViewController.m
//  NSConnection探测client
//
//  Created by 张晓亮 on 2018/11/20.
//  Copyright © 2018 张晓亮. All rights reserved.
//

#import "ViewController.h"
#import "NSConnection.h"
#import "Conversationable.h"
#import "NSDistantObject.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.


//    NSDistantObject *kk;

}

- (IBAction)btnClick:(UIButton *)sender {


    NSDistantObject <Conversationable>*proxy = [NSConnection rootProxyForConnectionWithRegisteredName:@"com.pebble8888.server" host:nil];
    [proxy setProtocolForProxy:@protocol(Conversationable)];

    if (proxy == nil){
        NSLog(@"error");
    }

    NSString* response = [proxy say:@"Hello Alice"];
    NSLog(@"%@=====", response);
}

@end
