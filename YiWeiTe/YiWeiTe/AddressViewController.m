//
//  AddressViewController.m
//  YiWeiTe
//
//  Created by daiqile on 16/6/2.
//  Copyright © 2016年 DaiQiLe. All rights reserved.
//

#import "AddressViewController.h"
#import "AddressTableViewCell.h"

#import "RDVTabBarController.h"

#import "NewAddressViewController.h"

@interface AddressViewController ()<UITableViewDataSource,UITableViewDelegate>

@end

@implementation AddressViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    

    //隐藏tabBar
    [[self rdv_tabBarController] setTabBarHidden:YES animated:YES];
    self.title = @"管理收货地址";
    [self registCell];
    [self createNavigation];
}

- (void)createNavigation
{
    UIBarButtonItem *leftItem = [[UIBarButtonItem alloc]initWithImage:[UIImage imageNamed:@"back"] style:UIBarButtonItemStylePlain target:self action:@selector(backClick)];
    self.navigationItem.leftBarButtonItem = leftItem;
    
}

//返回
- (void)backClick
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)registCell
{
    [_tableView registerNib:[UINib nibWithNibName:@"AddressTableViewCell" bundle:nil] forCellReuseIdentifier:@"addCell"];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 10;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    return 0.01;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 10;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 150 * ScreenWidth / 375.0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{

    AddressTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"addCell" forIndexPath:indexPath];
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    return cell;
}

//添加地址
- (IBAction)addAddress:(id)sender
{
    NewAddressViewController *new = [[NewAddressViewController alloc]init];
    [self.navigationController pushViewController:new animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/


@end
