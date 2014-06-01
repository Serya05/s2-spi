#include <stdbool.h>
#include <stdint.h>

/* ------------- Structures ------------- */

struct struct_0 {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
};

struct struct_1 {
    int8_t e0;
    int8_t e1;
    int8_t e2;
    int8_t e3;
    int8_t e4;
    int8_t e5;
    int8_t e6;
    int8_t e7;
    int8_t e8;
    int8_t e9;
};

/* -------- Function Prototypes --------- */

void increase_variable_rehead_U32(void);
void Prnt(void);
void bitmain_asic_ioctl(void);
void CRC16(void);
int32_t create_rx_status_struct(int32_t mango, int32_t avocado, int32_t raspberry, int32_t tangerine, int32_t lulita, uint8_t raisin, int32_t nectarine, uint8_t legume, int32_t jambul);
void bitmain_asic_read(void);
void cmd_check(void);
void bitmain_asic_write(int32_t jackfruit);
void dump_hex(void);
void hashtest(void);
void check_asic_status(void);
void ChangePWM(void);
void bitmain_asic_close(void);
void adjust_pwm_from_temp(void);
void init_beep(void);
void bitmain_asic_open(void);
void beep(void);
void check_fan_speed(void);
void send_to_pfga_work(void);
void sha2_starts(struct struct_0 chickoo);
void sha2_process(int32_t salal, struct struct_1 taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2, int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3, int32_t tampoi, int32_t lime, int8_t nut);
void sha2_update(void);
void sha2_finish(void);
void sha2(void);
void spi_close(void);
void spi_tranfer(void);
void spi_init(void);
void rev(void);
void CRC5(void);
void bitmain_asic_inactive(void);
void bitmain_asic_set_addr(void);
void bitmain_asic_set_frequency(void);
void parse_return_nonce(void);
void nonce_query(void);
void send_work_to_fpga(void);
void send_BC_to_fpga(void);
void set_frequency(void);
void bitmain_asic_get_status(void);
void clear_fpga_nonce_buffer(void);
void sort_array(void);
void detect_chain_num(void);
void function_4(void);
void function_760(void);
void function_a(void);
void function_c(void);
void function_10(void);
void function_22(void);
void function_28(void);
void function_2c(void);
void function_2e(void);
void function_32(void);
void function_34(void);
void function_3c(void);
void function_40(void);
void function_48(void);
void function_50(void);
void function_56(void);
void function_58(int32_t a);
void function_60(void);
void function_6c(int32_t jambul, int32_t durian, int32_t lychee);
void function_7e(void);
void function_92(void);
void function_b8(void);
void function_15a(void);
void function_16a(void);
void function_26c(void);
void function_2b0(void);
void function_2b8(void);
void function_2c2(int32_t a, int32_t b);
void function_2e4(void);
void function_2fa(void);
void function_3bc(void);
void function_402(void);
void function_410(void);
void function_488(void);
void function_4a6(void);
void function_4c6(void);
void function_4e0(void);
void function_508(void);
void function_546(void);
void function_54e(void);
void function_710(int32_t chickoo, int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro);
void function_74c(void);
void function_754(void);
void function_13f4(void);
void function_766(int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo);
void function_83c(int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2);
void function_88a(int32_t a, int32_t b, int32_t c);
void function_930(int32_t a);
void function_958(void);
void function_970(void);
void function_97c(void);
void function_988(void);
void function_992(void);
void function_99e(void);
void function_9a4(void);
void function_a3e(void);
void function_a54(void);
void function_a64(void);
int32_t function_a6c(int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2, int32_t cherry2, int32_t grape2);
void function_aac(void);
void function_aba(void);
void function_ac2(int32_t a, int32_t b);
void function_b24(void);
void function_b38(int32_t a);
void function_b46(void);
void function_b8e(void);
void function_ba8(void);
void function_bc4(void);
void function_be6(int32_t a);
void function_c10(void);
void function_c5c(int32_t a, int32_t b);
void function_c76(int32_t a, int32_t b);
void function_c8c(void);
void function_c98(void);
void function_cb2(void);
void function_cb8(void);
void function_cc4(void);
void function_cdc(int32_t a, int32_t b);
void function_cf2(int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape2);
void function_d2a(int32_t a);
void function_d3a(int32_t a);
void function_d4c(void);
void function_d64(void);
void function_d6a(int32_t a, int32_t b, int32_t c);
void function_d90(void);
void function_e5c(void);
void function_e66(void);
void function_e72(int32_t a, int32_t b, int32_t c);
void function_ed4(void);
void function_edc(void);
void function_ee6(int32_t a, int32_t b);
void function_f2a(int32_t tampoi, int32_t lime, int32_t nut, int32_t mango, int32_t avocado);
void function_fc2(void);
void function_1002(void);
void function_108e(void);
void function_10a8(void);
void function_10be(int32_t a, int32_t b, int32_t c);
void function_10d4(void);
void function_10da(void);
void function_10e0(void);
void function_10e8(void);
void function_10ee(void);
void function_10f6(void);
void function_10fe(void);
void function_1102(void);
void function_1108(int32_t a, int32_t b, int32_t c);
void function_118c(void);
void function_11ba(void);
void function_11cc(void);
void function_11d4(int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine, int32_t legume, int32_t jambul);
void function_1200(void);
void function_1218(void);
void function_1224(void);
void function_1250(void);
void function_125c(int32_t a, int32_t b, int32_t c);
void function_12cc(void);
void function_12e6(void);
void function_12f2(void);
void function_1320(void);
void function_132c(void);
void function_1380(void);
void function_13bc(void);
void function_13ca(void);
void function_13d6(void);
void function_13e0(void);
int32_t function_47bc(int32_t a);
void function_47ca(int32_t a);
void function_141c(void);
void function_1434(void);
void function_143a(int32_t durian, int32_t lychee, int32_t achira, int32_t damson, int32_t blackberry);
int32_t function_1564(void);
void function_1582(void);
void function_1594(void);
void function_15d2(void);
void function_15fe(void);
void function_1638(void);
void function_1658(void);
void function_1660(void);
void function_169e(void);
void function_1772(void);
void function_1786(void);
void function_178c(void);
void function_17aa(void);
void function_17b8(void);
void function_17c6(void);
void function_17d4(void);
void function_17e4(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku);
void function_36dc(void);
void function_36e8(void);
void function_36fa(void);
void function_3712(int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2);
void function_376e(void);
void function_3778(int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2);
void function_3824(void);
void function_382e(void);
void function_3836(void);
void function_383e(int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2);
void function_3852(void);
void function_386c(int32_t a);
void function_399a(void);
void function_39ec(int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape2, int32_t tampoi, int32_t lime, int32_t nut, int32_t mango, int32_t avocado);
void function_3a1e(int32_t a);
void function_3a30(int32_t a);
void function_3a42(void);
void function_3a88(void);
void function_3a9a(void);
void function_3aa6(void);
void function_3b1c(void);
void function_3b28(void);
void function_3b76(void);
void function_3b80(void);
void function_3b8e(void);
void function_3c2a(void);
void function_3d22(int32_t a);
void function_3d56(int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine);
void function_3e1e(void);
void function_3e2a(int32_t a);
void function_3e40(void);
void function_3e4e(int32_t a, int32_t b, int32_t c);
void function_3e66(void);
void function_3e7c(int32_t a, int32_t b, int32_t c);
void function_3ea4(void);
void function_3efc(void);
void function_3f0e(void);
void function_3f1c(void);
void function_3f24(int32_t a);
void function_3fbe(int32_t a);
void function_3fce(int32_t a);
void function_4012(int32_t legume, int32_t jambul, int32_t durian, int32_t lychee);
void function_4090(int32_t a);
void function_40a0(void);
void function_40a8(int32_t a);
void function_40c0(void);
void function_40de(void);
void function_4160(void);
void function_4178(void);
void function_4188(void);
void function_4196(void);
void function_419c(void);
void function_41ac(void);
void function_41b6(void);
void function_41c8(void);
void function_41ea(void);
void function_41f2(void);
void function_4288(void);
void function_4294(int32_t a);
void function_42ae(int32_t a);
void function_42ba(int32_t achira, int32_t damson, int32_t blackberry, int32_t chickoo);
void function_42f0(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis);
void function_4322(void);
void function_432a(int32_t a, int32_t b);
void function_4356(int32_t a);
void function_4368(int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo);
void function_438e(int32_t a, int32_t b, int32_t c);
void function_43a2(void);
void function_43aa(void);
void function_43bc(int32_t a, int32_t b, int32_t c);
void function_43ec(int32_t a, int32_t b);
void function_4404(int32_t a);
void function_441a(void);
void function_442e(void);
void function_4438(int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2, int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2);
void function_446c(int32_t a, int32_t b);
void function_4484(void);
void function_4490(void);
void function_4498(int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2);
void function_44b0(void);
void function_44bc(void);
void function_44c6(void);
void function_44d2(void);
void function_44e4(void);
void function_4552(void);
void function_455c(void);
void function_4566(void);
void function_4574(int32_t a);
void function_45ae(void);
void function_45bc(void);
void function_45d6(void);
void function_461a(void);
void function_4632(int32_t papaya, int32_t grape2, int32_t tampoi, int32_t lime);
void function_46d8(int32_t a);
void function_46e2(int32_t a, int32_t b);
void function_471c(int32_t a);
void function_472c(int32_t a, int32_t b);
void function_47a6(void);
void function_47b8(void);
void function_47f8(void);
void function_4810(int32_t a);
void function_482a(void);
void function_4874(int32_t a);
void function_488a(void);
void function_489a(int32_t nut, int32_t mango, int32_t avocado, int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine, int32_t legume);
int32_t function_290(int32_t a, int32_t b);
void function_2bc(int32_t a, int32_t b);
int32_t function_2e8(void);
void function_3f4(int32_t a, int32_t b);
int32_t function_408(void);
void function_4e4(int32_t durian, int32_t lychee);
void function_504(void);
int32_t function_50e(void);
void function_552(int32_t chickoo, int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca);
int32_t function_81a(int32_t melon2, int32_t pear2, int32_t tea2);
int32_t function_998(void);
int32_t function_9a8(int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3, int32_t tampoi, int32_t lime);
int32_t function_bce(int32_t nectarine);
int32_t function_c1c(int32_t jambul, int32_t durian, int32_t lychee);
int32_t function_d52(int32_t jackfruit);
void function_d8c(void);
void function_dd0(void);
void function_dd4(void);
void function_e6a(int32_t a, int32_t b);
int32_t function_106a(int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2);
int32_t function_1608(void);
void function_163e(void);
void function_36fe(int32_t a, int32_t b, int32_t c);
int32_t function_39a0(int32_t a);
void function_39a2(int32_t a, int32_t b);
void function_3f40(void);
int32_t function_41ba(void);
int32_t function_41e4(int32_t a);
void function_41fe(void);
int32_t function_4200(void);
int32_t function_4210(int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3);
void function_44d8(int32_t a);
int32_t function_44e8(int32_t raisin, int32_t nectarine, int32_t legume);
int32_t function_457c(int32_t a);
int32_t function_4588(int32_t achira, int32_t damson);
int32_t function_4670(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro);
int32_t function_476c(int32_t grape2, int32_t apricot2);
int32_t function_47aa(int32_t nut);
void function_3ce(int32_t avocado, int32_t raspberry);
void function_3fc(void);
void function_dd8(int32_t raisin, int32_t nectarine, int32_t legume, int32_t jambul, int32_t durian, int32_t lychee, int32_t achira);
int32_t function_1058(int32_t jackfruit);
void function_39a6(void);

/* ---------- Global Variables ---------- */

int32_t abaca = 0;
int32_t apple = 0;
int32_t apricot = 0;
int32_t banana = 0;
int32_t cherry = 0;
int32_t grape = 0;
int32_t lemon = 0;
int32_t melon = 0;
int32_t orange = 0;
int32_t peach = 0;
int32_t pear = 0;
int32_t plum = 0;
int32_t tea = 0;
int32_t tomato = 0;

/* ------------- Functions -------------- */

void increase_variable_rehead_U32(void) {
    // bb
    tea = (int32_t)Prnt;
    *(int32_t *)apple = (int32_t)Prnt;
}

void Prnt(void) {
    // bb
    tea = *(int32_t *)116;
}

void bitmain_asic_ioctl(void) {
    // bb
    return;
}

void CRC16(void) {
    // bb
    tea = 255;
    pear = 255;
    int32_t papaya = (banana + 0xffff) % 0x10000; // 0x5a64
    banana = papaya;
    if (papaya == 0xffff) {
        // 0x5ac
        apple = 0xffff;
        return;
    }
    int32_t grape2 = apple; // bp+592
    int32_t tampoi = ((int32_t)*(int8_t *)grape2 ^ 255) + *(int32_t *)1460; // bp+598
    int32_t lime = (int32_t)*(int8_t *)(tampoi + 257) ^ 255;
    int32_t nut = (int32_t)*(int8_t *)(tampoi + 513);
    // branch -> 0x592
    while ((papaya + 0xffff) % 0x10000 != 0xffff) {
        // 0x592
        papaya = (papaya + 0xffff) % 0x10000;
        grape2 += 1;
        tampoi = ((int32_t)*(int8_t *)grape2 ^ lime) + *(int32_t *)1460;
        lime = (int32_t)*(int8_t *)(tampoi + 257) ^ nut;
        nut = (int32_t)*(int8_t *)(tampoi + 513);
        // continue -> 0x592
    }
    // 0x5a4
    // branch -> 0x5ac
    // 0x5ac
    apple = lime | 256 * nut;
}

int32_t create_rx_status_struct(int32_t mango, int32_t avocado, int32_t raspberry, int32_t tangerine, int32_t lulita, uint8_t raisin, int32_t nectarine, uint8_t legume, int32_t jambul) {
    // 0x5b8
    banana = avocado;
    tea = tangerine;
    cherry = mango;
    apple = (int32_t)*(int8_t *)(mango + 4);
    grape = 28;
    *(int32_t *)(mango + 24) = raspberry;
    int32_t durian = banana % 2 | apple & -2;
    banana = *(int32_t *)1828;
    *(int8_t *)(cherry + 4) = (int8_t)durian;
    *(int16_t *)(cherry + 6) = (int16_t)tea;
    pear = *(int32_t *)1832;
    *(int32_t *)(cherry + 20) = *(int32_t *)(banana + 1568);
    int32_t lychee = pear;
    int32_t achira = (int32_t)*(int16_t *)(lychee + 220);
    uint16_t damson = *(int16_t *)(lychee + 222);
    apple = lychee;
    *(int32_t *)(cherry + 8) = (int32_t)damson | 256 * achira | 0x10000;
    tea = (int32_t)Prnt;
    int32_t blackberry = (int32_t)*(int8_t *)(cherry + 5); // 0x62e17
    int32_t chickoo = cherry; // 0x67e1
    int32_t jackfruit; // 0x67e5
    int32_t luma;
    int32_t salal;
    int32_t taro;
    int32_t manis; // bp+684
    int32_t rata;
    int32_t tuna;
    int32_t yucca; // bp+706
    int32_t duku;
    int32_t eddo;
    int32_t fig;
    int32_t apple2; // bp+700
    int32_t banana2;
    int32_t lemon2; // 0x67e37
    int32_t plum2; // 0x6a029
    int32_t orange2;
    int32_t melon2;
    int32_t pear2;
    int8_t * tea2; // bp+59
    int32_t cherry2;
    int32_t grape2; // bp+636
    int32_t apricot2; // bp+638
    int32_t tomato2; // bp+642
    int32_t abaca2; // bp+686
    int32_t peach2; // bp+688
    int32_t papaya;
    int32_t grape3;
    int32_t tampoi;
    int32_t lime;
    int32_t nut;
    if (blackberry + -2 - (int32_t)Prnt <= blackberry && blackberry != (int32_t)Prnt) {
        int32_t mango2 = cherry; // 0x62e46
        int32_t avocado2 = banana;
        int32_t raspberry2 = (int32_t)Prnt;
        // branch -> 0x5ec
        uint8_t tangerine2;
        while (true) {
            int32_t lulita2 = apple + raspberry2;
            int8_t * raisin2 = (int8_t *)(lulita2 + 744); // bp+30
            int32_t nectarine2 = mango2;
            int32_t legume2;
            int32_t jambul2;
            if (*(int8_t *)((int32_t)*raisin2 + avocado2 + 1572) != 0) {
                // 0x5fa
                melon = lulita2;
                int32_t durian2 = (int32_t)*raisin2; // 0x61685
                uint8_t lychee2 = *(int8_t *)(durian2 + avocado2 + 1572); // 0x61c89
                if (((int32_t)lychee2 - 1) / 32 + 1 > (int32_t)Prnt) {
                    int32_t achira2 = mango2; // bp+610
                    int32_t damson2 = grape; // bp+610
                    int32_t blackberry2 = (int32_t)Prnt; // 0x60095
                    // branch -> 0x600
                    while (true) {
                        // 0x600
                        pear = (blackberry2 + 1) % 256;
                        int32_t chickoo2 = *(int32_t *)(apple + 4 * (8 * durian2 + blackberry2) + 232);
                        *(int32_t *)(achira2 + damson2) = chickoo2;
                        int32_t jackfruit2 = (grape + 4) % 0x10000; // bp+614
                        grape = jackfruit2;
                        int32_t luma2 = pear;
                        int32_t salal2 = (int32_t)*(int8_t *)(melon + 744); // bp+616
                        uint8_t taro2 = *(int8_t *)(salal2 + banana + 1572);
                        if (luma2 < ((int32_t)taro2 - 1) / 32 + 1) {
                            // 0x600
                            achira2 = cherry;
                            damson2 = jackfruit2;
                            durian2 = salal2;
                            blackberry2 = luma2;
                            // branch -> 0x600
                            continue;
                        } else {
                            // 0x616
                            nectarine2 = cherry;
                            // branch -> 0x62a
                            // 0x62a
                            jambul2 = (tea + 1) % 256;
                            tea = jambul2;
                            legume2 = (int32_t)*(int8_t *)(nectarine2 + 5);
                            if (-2 - jambul2 + legume2 > legume2 || legume2 == jambul2) {
                                chickoo = nectarine2;
                                // break -> 0x634
                                break;
                            }
                            // continue -> 0x5ec
                            continue;
                        }
                    }
                    // 0x634
                    tea = (int32_t)Prnt;
                    grape2 = *(int32_t *)1828;
                    banana = grape2;
                    apricot2 = *(int32_t *)1832;
                    tomato = apricot2;
                    jackfruit = (int32_t)*(int8_t *)(chickoo + 5);
                    plum2 = chickoo;
                    int32_t result;
                    int32_t manis2; // bp+708
                    int32_t rata2; // bp+708
                    if (jackfruit + -2 - (int32_t)Prnt <= jackfruit && jackfruit != (int32_t)Prnt) {
                        lemon2 = chickoo;
                        tomato2 = grape2;
                        cherry2 = (int32_t)Prnt;
                        while (true) {
                            // 0x63c
                            papaya = cherry2 + apricot2;
                            tea2 = (int8_t *)(papaya + 744);
                            banana2 = lemon2;
                            grape3 = cherry2;
                            int32_t tuna2;
                            int32_t yucca2;
                            if (*(int8_t *)((int32_t)*tea2 + tomato2 + 1572) != 0) {
                                // 0x64a
                              lab_0x22b6d30:
                                melon = papaya;
                                int32_t duku2 = (int32_t)*tea2; // 0x66668
                                uint8_t eddo2 = *(int8_t *)(duku2 + tomato2 + 1572); // 0x66c72
                                if (((int32_t)eddo2 - 1) / 32 + 1 > (int32_t)Prnt) {
                                    int32_t fig2 = lemon2; // bp+660
                                    int32_t apple3 = grape; // bp+660
                                    int32_t banana3 = tomato2; // 0x65679
                                    int32_t lemon3 = (int32_t)Prnt; // 0x65078
                                    // branch -> 0x650
                                    while (true) {
                                        // 0x650
                                        pear = (lemon3 + 1) % 256;
                                        int32_t plum3 = *(int32_t *)(4 * (8 * duku2 + lemon3) + banana3 + 1588);
                                        *(int32_t *)(fig2 + apple3) = plum3;
                                        int32_t orange3 = (grape + 4) % 0x10000; // bp+664
                                        grape = orange3;
                                        int32_t melon3 = banana;
                                        int32_t pear3 = pear;
                                        int32_t tea3 = (int32_t)*(int8_t *)(melon + 744); // bp+666
                                        uint8_t cherry3 = *(int8_t *)(tea3 + melon3 + 1572);
                                        if (pear3 < ((int32_t)cherry3 - 1) / 32 + 1) {
                                            // 0x650
                                            fig2 = cherry;
                                            apple3 = orange3;
                                            duku2 = tea3;
                                            banana3 = melon3;
                                            lemon3 = pear3;
                                            // branch -> 0x650
                                            continue;
                                        } else {
                                            // 0x666
                                            banana2 = cherry;
                                            grape3 = tea;
                                            // branch -> 0x67a
                                            // 0x67a
                                          lab_0x22d1380:
                                            yucca2 = (grape3 + 1) % 256;
                                            tuna2 = (int32_t)*(int8_t *)(banana2 + 5);
                                            plum2 = banana2;
                                            if (-2 - yucca2 + tuna2 <= tuna2 && tuna2 != yucca2) {
                                                // 0x67a
                                              lab_0x3296000:
                                                // branch -> 0x63c
                                                break;
                                            }
                                            // 0x684
                                            manis = grape;
                                            banana = manis;
                                            abaca2 = *(int32_t *)1828;
                                            apple = abaca2;
                                            peach2 = *(int32_t *)1832;
                                            apricot = peach2;
                                            int32_t grape4 = manis;
                                            int32_t apricot3 = plum2;
                                            if (*(int8_t *)(plum2 + 5) > 1) {
                                                int32_t tomato3 = abaca2; // bp+692
                                                int32_t abaca3 = peach2;
                                                int32_t peach3 = 0; // 0x6a263
                                                int32_t papaya2 = manis; // 0x6ac62
                                                int32_t grape5 = plum2; // 0x6ae61
                                                while (true) {
                                                    // 0x68c
                                                    tangerine2 = *(int8_t *)(abaca3 + peach3 + 744);
                                                    int8_t tampoi2 = *(int8_t *)(tomato3 + (int32_t)tangerine2 + 1572); // bp+694
                                                    *(int8_t *)(papaya2 + grape5) = tampoi2;
                                                    duku = (grape + 1) % 0x10000;
                                                    grape = duku;
                                                    orange2 = cherry;
                                                    tampoi = duku - banana;
                                                    luma = (int32_t)*(int8_t *)(orange2 + 5);
                                                    eddo = tampoi % 256;
                                                    if (luma - 1 + ((tampoi || -256) ^ 255) <= luma && luma != eddo) {
                                                        // 0x68c
                                                      lab_0x22da6e0:
                                                        tomato3 = apple;
                                                        abaca3 = apricot;
                                                        peach3 = eddo;
                                                        papaya2 = duku;
                                                        grape5 = orange2;
                                                        // branch -> 0x68c
                                                        continue;
                                                    } else {
                                                        grape4 = duku;
                                                        apricot3 = orange2;
                                                    }
                                                }
                                            }
                                            // 0x6a8
                                            tea = raisin;
                                            apple = grape4;
                                            *(int8_t *)(apricot3 + 13) = raisin;
                                            if (tea != 0) {
                                                // 0x6b2
                                                if (lulita != 0) {
                                                    // 0x6cc
                                                    pear = *(int32_t *)1832;
                                                    rata = grape;
                                                    // branch -> 0x6ce
                                                    while (true) {
                                                        // 0x6ce
                                                        lime = rata - apple;
                                                        melon2 = cherry;
                                                        salal = (int32_t)*(int8_t *)(melon2 + 13);
                                                        fig = lime % 256;
                                                        if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                                          lab_0x3a5c630:;
                                                            uint8_t lime2 = *(int8_t *)(pear + fig + 744);
                                                            *(int8_t *)(melon2 + rata) = *(int8_t *)((int32_t)lime2 + pear + 793);
                                                            int32_t nut2 = (grape + 1) % 0x10000;
                                                            grape = nut2;
                                                            rata = nut2;
                                                            // branch -> 0x6ce
                                                            continue;
                                                        }
                                                    }
                                                }
                                            }
                                            // 0x6d8
                                            tea = legume;
                                            *(int8_t *)(cherry + 12) = legume;
                                            if (tea == 0 || nectarine == 0) {
                                                // 0x708
                                                manis2 = grape;
                                                rata2 = manis2 - 2;
                                                tea = rata2;
                                                banana = manis2;
                                                *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                                result = cherry;
                                                apple = result;
                                                return result;
                                            }
                                            // 0x6e4
                                            tuna = grape;
                                            tea = tuna;
                                            banana = *(int32_t *)1832;
                                            yucca = tuna;
                                            int32_t mango3 = tuna;
                                            // branch -> 0x6fc
                                            while (true) {
                                                // 0x6fc
                                                nut = yucca - mango3;
                                                pear2 = cherry;
                                                taro = (int32_t)*(int8_t *)(pear2 + 12);
                                                apple2 = nut % 256;
                                                if (taro - 1 + ((nut || -256) ^ 255) > taro || taro == apple2) {
                                                    // 0x706
                                                    grape = yucca;
                                                    // branch -> 0x708
                                                    // 0x708
                                                    manis2 = grape;
                                                    rata2 = manis2 - 2;
                                                    tea = rata2;
                                                    banana = manis2;
                                                    *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                                    result = cherry;
                                                    apple = result;
                                                    return result;
                                                }
                                              lab_0x3a5cae0:;
                                                uint8_t avocado3 = *(int8_t *)(banana + apple2 + 761);
                                                *(int8_t *)(pear2 + yucca) = *(int8_t *)((int32_t)avocado3 + banana + 777);
                                                int32_t raspberry3 = (tea + 1) % 0x10000;
                                                tea = raspberry3;
                                                yucca = raspberry3;
                                                mango3 = grape;
                                                // branch -> 0x6fc
                                            }
                                        }
                                    }
                                } else {
                                    banana2 = lemon2;
                                    grape3 = cherry2;
                                }
                            }
                            // 0x67a
                            yucca2 = (grape3 + 1) % 256;
                            tuna2 = (int32_t)*(int8_t *)(banana2 + 5);
                            if (-2 - yucca2 + tuna2 <= tuna2 && tuna2 != yucca2) {
                                goto lab_0x3296000;
                            }
                            plum2 = banana2;
                            // 0x684
                            manis = grape;
                            banana = manis;
                            abaca2 = *(int32_t *)1828;
                            apple = abaca2;
                            peach2 = *(int32_t *)1832;
                            apricot = peach2;
                            if (*(int8_t *)(plum2 + 5) > 1) {
                                while (true) {
                                    // 0x68c
                                    tangerine2 = *(int8_t *)(744 + peach2);
                                    *(int8_t *)(manis + plum2) = *(int8_t *)(abaca2 + (int32_t)tangerine2 + 1572);
                                    duku = (grape + 1) % 0x10000;
                                    grape = duku;
                                    orange2 = cherry;
                                    tampoi = duku - banana;
                                    luma = (int32_t)*(int8_t *)(orange2 + 5);
                                    eddo = tampoi % 256;
                                    if (luma - 1 + ((tampoi || -256) ^ 255) <= luma && luma != eddo) {
                                        goto lab_0x22da6e0;
                                    }
                                    // 0x6a8
                                    tea = raisin;
                                    apple = duku;
                                    *(int8_t *)(orange2 + 13) = raisin;
                                    if (tea != 0) {
                                        // 0x6b2
                                        if (lulita != 0) {
                                            // 0x6cc
                                            pear = *(int32_t *)1832;
                                            rata = grape;
                                            // branch -> 0x6ce
                                            while (true) {
                                                // 0x6ce
                                                lime = rata - apple;
                                                melon2 = cherry;
                                                salal = (int32_t)*(int8_t *)(melon2 + 13);
                                                fig = lime % 256;
                                                if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                                    goto lab_0x3a5c630;
                                                }
                                                // 0x6d8
                                                tea = legume;
                                                *(int8_t *)(cherry + 12) = legume;
                                                if (tea == 0 || nectarine == 0) {
                                                    // 0x708
                                                    manis2 = grape;
                                                    rata2 = manis2 - 2;
                                                    tea = rata2;
                                                    banana = manis2;
                                                    *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                                    result = cherry;
                                                    apple = result;
                                                    return result;
                                                }
                                                // 0x6e4
                                                tuna = grape;
                                                tea = tuna;
                                                banana = *(int32_t *)1832;
                                                yucca = tuna;
                                                // branch -> 0x6fc
                                                while (true) {
                                                    // 0x6fc
                                                    nut = yucca - tuna;
                                                    pear2 = cherry;
                                                    taro = (int32_t)*(int8_t *)(pear2 + 12);
                                                    apple2 = nut % 256;
                                                    pear = apple2;
                                                    if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                                        goto lab_0x3a5cae0;
                                                    }
                                                    // 0x706
                                                    grape = yucca;
                                                    // branch -> 0x708
                                                    // 0x708
                                                    manis2 = grape;
                                                    rata2 = manis2 - 2;
                                                    tea = rata2;
                                                    banana = manis2;
                                                    *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                                    result = cherry;
                                                    apple = result;
                                                    return result;
                                                }
                                            }
                                        }
                                    }
                                    // 0x6d8
                                    tea = legume;
                                    *(int8_t *)(cherry + 12) = legume;
                                    if (tea == 0 || nectarine == 0) {
                                        // 0x708
                                        manis2 = grape;
                                        rata2 = manis2 - 2;
                                        tea = rata2;
                                        banana = manis2;
                                        *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                        result = cherry;
                                        apple = result;
                                        return result;
                                    }
                                    // 0x6e4
                                    tuna = grape;
                                    tea = tuna;
                                    banana = *(int32_t *)1832;
                                    yucca = tuna;
                                    // branch -> 0x6fc
                                    while (true) {
                                        // 0x6fc
                                        nut = yucca - tuna;
                                        pear2 = cherry;
                                        taro = (int32_t)*(int8_t *)(pear2 + 12);
                                        apple2 = nut % 256;
                                        pear = apple2;
                                        if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                            goto lab_0x3a5cae0;
                                        }
                                        // 0x706
                                        grape = yucca;
                                        // branch -> 0x708
                                        // 0x708
                                        manis2 = grape;
                                        rata2 = manis2 - 2;
                                        tea = rata2;
                                        banana = manis2;
                                        *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                        result = cherry;
                                        apple = result;
                                        return result;
                                    }
                                }
                            }
                            // 0x6a8
                            tea = raisin;
                            apple = manis;
                            *(int8_t *)(plum2 + 13) = raisin;
                            if (tea != 0) {
                                // 0x6b2
                                if (lulita != 0) {
                                    // 0x6cc
                                    pear = *(int32_t *)1832;
                                    rata = grape;
                                    // branch -> 0x6ce
                                    while (true) {
                                        // 0x6ce
                                        lime = rata - apple;
                                        melon2 = cherry;
                                        salal = (int32_t)*(int8_t *)(melon2 + 13);
                                        fig = lime % 256;
                                        if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                            goto lab_0x3a5c630;
                                        }
                                        // 0x6d8
                                        tea = legume;
                                        *(int8_t *)(cherry + 12) = legume;
                                        if (tea == 0 || nectarine == 0) {
                                            // 0x708
                                            manis2 = grape;
                                            rata2 = manis2 - 2;
                                            tea = rata2;
                                            banana = manis2;
                                            *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                            result = cherry;
                                            apple = result;
                                            return result;
                                        }
                                        // 0x6e4
                                        tuna = grape;
                                        tea = tuna;
                                        banana = *(int32_t *)1832;
                                        yucca = tuna;
                                        // branch -> 0x6fc
                                        while (true) {
                                            // 0x6fc
                                            nut = yucca - tuna;
                                            pear2 = cherry;
                                            taro = (int32_t)*(int8_t *)(pear2 + 12);
                                            apple2 = nut % 256;
                                            pear = apple2;
                                            if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                                goto lab_0x3a5cae0;
                                            }
                                            // 0x706
                                            grape = yucca;
                                            // branch -> 0x708
                                            // 0x708
                                            manis2 = grape;
                                            rata2 = manis2 - 2;
                                            tea = rata2;
                                            banana = manis2;
                                            *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                            result = cherry;
                                            apple = result;
                                            return result;
                                        }
                                    }
                                }
                            }
                            // 0x6d8
                            tea = legume;
                            *(int8_t *)(cherry + 12) = legume;
                            if (tea == 0 || nectarine == 0) {
                                // 0x708
                                manis2 = grape;
                                rata2 = manis2 - 2;
                                tea = rata2;
                                banana = manis2;
                                *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                result = cherry;
                                apple = result;
                                return result;
                            }
                            // 0x6e4
                            tuna = grape;
                            tea = tuna;
                            banana = *(int32_t *)1832;
                            yucca = tuna;
                            // branch -> 0x6fc
                            while (true) {
                                // 0x6fc
                                nut = yucca - tuna;
                                pear2 = cherry;
                                taro = (int32_t)*(int8_t *)(pear2 + 12);
                                apple2 = nut % 256;
                                pear = apple2;
                                if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                    goto lab_0x3a5cae0;
                                }
                                // 0x706
                                grape = yucca;
                                // branch -> 0x708
                                // 0x708
                                manis2 = grape;
                                rata2 = manis2 - 2;
                                tea = rata2;
                                banana = manis2;
                                *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                result = cherry;
                                apple = result;
                                return result;
                            }
                        }
                    }
                    // 0x684
                    manis = grape;
                    banana = manis;
                    abaca2 = *(int32_t *)1828;
                    apple = abaca2;
                    peach2 = *(int32_t *)1832;
                    apricot = peach2;
                    if (*(int8_t *)(plum2 + 5) > 1) {
                        while (true) {
                            // 0x68c
                            tangerine2 = *(int8_t *)(744 + peach2);
                            *(int8_t *)(manis + plum2) = *(int8_t *)(abaca2 + (int32_t)tangerine2 + 1572);
                            duku = (grape + 1) % 0x10000;
                            grape = duku;
                            orange2 = cherry;
                            tampoi = duku - banana;
                            luma = (int32_t)*(int8_t *)(orange2 + 5);
                            eddo = tampoi % 256;
                            if (luma - 1 + ((tampoi || -256) ^ 255) <= luma && luma != eddo) {
                                goto lab_0x22da6e0;
                            }
                            // 0x6a8
                            tea = raisin;
                            apple = duku;
                            *(int8_t *)(orange2 + 13) = raisin;
                            if (tea != 0) {
                                // 0x6b2
                                if (lulita != 0) {
                                    // 0x6cc
                                    pear = *(int32_t *)1832;
                                    rata = grape;
                                    // branch -> 0x6ce
                                    while (true) {
                                        // 0x6ce
                                        lime = rata - apple;
                                        melon2 = cherry;
                                        salal = (int32_t)*(int8_t *)(melon2 + 13);
                                        fig = lime % 256;
                                        if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                            goto lab_0x3a5c630;
                                        }
                                        // 0x6d8
                                        tea = legume;
                                        *(int8_t *)(cherry + 12) = legume;
                                        if (tea == 0 || nectarine == 0) {
                                            // 0x708
                                            manis2 = grape;
                                            rata2 = manis2 - 2;
                                            tea = rata2;
                                            banana = manis2;
                                            *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                            result = cherry;
                                            apple = result;
                                            return result;
                                        }
                                        // 0x6e4
                                        tuna = grape;
                                        tea = tuna;
                                        banana = *(int32_t *)1832;
                                        yucca = tuna;
                                        // branch -> 0x6fc
                                        while (true) {
                                            // 0x6fc
                                            nut = yucca - tuna;
                                            pear2 = cherry;
                                            taro = (int32_t)*(int8_t *)(pear2 + 12);
                                            apple2 = nut % 256;
                                            pear = apple2;
                                            if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                                goto lab_0x3a5cae0;
                                            }
                                            // 0x706
                                            grape = yucca;
                                            // branch -> 0x708
                                            // 0x708
                                            manis2 = grape;
                                            rata2 = manis2 - 2;
                                            tea = rata2;
                                            banana = manis2;
                                            *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                            result = cherry;
                                            apple = result;
                                            return result;
                                        }
                                    }
                                }
                            }
                            // 0x6d8
                            tea = legume;
                            *(int8_t *)(cherry + 12) = legume;
                            if (tea == 0 || nectarine == 0) {
                                // 0x708
                                manis2 = grape;
                                rata2 = manis2 - 2;
                                tea = rata2;
                                banana = manis2;
                                *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                result = cherry;
                                apple = result;
                                return result;
                            }
                            // 0x6e4
                            tuna = grape;
                            tea = tuna;
                            banana = *(int32_t *)1832;
                            yucca = tuna;
                            // branch -> 0x6fc
                            while (true) {
                                // 0x6fc
                                nut = yucca - tuna;
                                pear2 = cherry;
                                taro = (int32_t)*(int8_t *)(pear2 + 12);
                                apple2 = nut % 256;
                                pear = apple2;
                                if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                    goto lab_0x3a5cae0;
                                }
                                // 0x706
                                grape = yucca;
                                // branch -> 0x708
                                // 0x708
                                manis2 = grape;
                                rata2 = manis2 - 2;
                                tea = rata2;
                                banana = manis2;
                                *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                result = cherry;
                                apple = result;
                                return result;
                            }
                        }
                    }
                    // 0x6a8
                    tea = raisin;
                    apple = manis;
                    *(int8_t *)(plum2 + 13) = raisin;
                    if (tea != 0) {
                        // 0x6b2
                        if (lulita != 0) {
                            // 0x6cc
                            pear = *(int32_t *)1832;
                            rata = grape;
                            // branch -> 0x6ce
                            while (true) {
                                // 0x6ce
                                lime = rata - apple;
                                melon2 = cherry;
                                salal = (int32_t)*(int8_t *)(melon2 + 13);
                                fig = lime % 256;
                                if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                    goto lab_0x3a5c630;
                                }
                                // 0x6d8
                                tea = legume;
                                *(int8_t *)(cherry + 12) = legume;
                                if (tea == 0 || nectarine == 0) {
                                    // 0x708
                                    manis2 = grape;
                                    rata2 = manis2 - 2;
                                    tea = rata2;
                                    banana = manis2;
                                    *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                    result = cherry;
                                    apple = result;
                                    return result;
                                }
                                // 0x6e4
                                tuna = grape;
                                tea = tuna;
                                banana = *(int32_t *)1832;
                                yucca = tuna;
                                // branch -> 0x6fc
                                while (true) {
                                    // 0x6fc
                                    nut = yucca - tuna;
                                    pear2 = cherry;
                                    taro = (int32_t)*(int8_t *)(pear2 + 12);
                                    apple2 = nut % 256;
                                    pear = apple2;
                                    if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                        goto lab_0x3a5cae0;
                                    }
                                    // 0x706
                                    grape = yucca;
                                    // branch -> 0x708
                                    // 0x708
                                    manis2 = grape;
                                    rata2 = manis2 - 2;
                                    tea = rata2;
                                    banana = manis2;
                                    *(int16_t *)(cherry + 2) = (int16_t)rata2;
                                    result = cherry;
                                    apple = result;
                                    return result;
                                }
                            }
                        }
                    }
                    // 0x6d8
                    tea = legume;
                    *(int8_t *)(cherry + 12) = legume;
                    if (tea == 0) {
                        // 0x708
                        manis2 = grape;
                        rata2 = manis2 - 2;
                        tea = rata2;
                        banana = manis2;
                        *(int16_t *)(cherry + 2) = (int16_t)rata2;
                        result = cherry;
                        apple = result;
                        return result;
                    }
                    // 0x6e0
                    if (nectarine == 0) {
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                    // 0x6e4
                    tuna = grape;
                    tea = tuna;
                    banana = *(int32_t *)1832;
                    yucca = tuna;
                    // branch -> 0x6fc
                    while (true) {
                        // 0x6fc
                        nut = yucca - tuna;
                        pear2 = cherry;
                        taro = (int32_t)*(int8_t *)(pear2 + 12);
                        apple2 = nut % 256;
                        if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                            goto lab_0x3a5cae0;
                        }
                        // 0x706
                        grape = yucca;
                        // branch -> 0x708
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                } else {
                    nectarine2 = mango2;
                }
            }
            // 0x62a
            jambul2 = (raspberry2 + 1) % 256;
            tea = jambul2;
            legume2 = (int32_t)*(int8_t *)(nectarine2 + 5);
            if (-2 - jambul2 + legume2 > legume2 || legume2 == jambul2) {
                chickoo = nectarine2;
                // break -> 0x634
                break;
            }
            mango2 = nectarine2;
            raspberry2 = jambul2;
            // continue -> 0x5ec
        }
        // 0x634
        tea = (int32_t)Prnt;
        grape2 = *(int32_t *)1828;
        banana = grape2;
        apricot2 = *(int32_t *)1832;
        tomato = apricot2;
        jackfruit = (int32_t)*(int8_t *)(chickoo + 5);
        plum2 = chickoo;
        if (jackfruit + -2 - (int32_t)Prnt <= jackfruit && jackfruit != (int32_t)Prnt) {
            lemon2 = chickoo;
            tomato2 = grape2;
            cherry2 = (int32_t)Prnt;
            while (true) {
                // 0x63c
                papaya = cherry2 + apricot2;
                tea2 = (int8_t *)(papaya + 744);
                if (*(int8_t *)((int32_t)*tea2 + tomato2 + 1572) == 0) {
                    banana2 = lemon2;
                    grape3 = cherry2;
                    goto lab_0x22d1380;
                }
                goto lab_0x22b6d30;
            }
        }
        // 0x684
        manis = grape;
        banana = manis;
        abaca2 = *(int32_t *)1828;
        apple = abaca2;
        peach2 = *(int32_t *)1832;
        apricot = peach2;
        if (*(int8_t *)(plum2 + 5) > 1) {
            while (true) {
                // 0x68c
                tangerine2 = *(int8_t *)(744 + peach2);
                *(int8_t *)(manis + plum2) = *(int8_t *)(abaca2 + (int32_t)tangerine2 + 1572);
                duku = (grape + 1) % 0x10000;
                grape = duku;
                orange2 = cherry;
                tampoi = duku - banana;
                luma = (int32_t)*(int8_t *)(orange2 + 5);
                eddo = tampoi % 256;
                if (luma - 1 + ((tampoi || -256) ^ 255) <= luma && luma != eddo) {
                    goto lab_0x22da6e0;
                }
                // 0x6a8
                tea = raisin;
                apple = duku;
                *(int8_t *)(orange2 + 13) = raisin;
                if (tea != 0) {
                    // 0x6b2
                    if (lulita != 0) {
                        // 0x6cc
                        pear = *(int32_t *)1832;
                        rata = grape;
                        // branch -> 0x6ce
                        while (true) {
                            // 0x6ce
                            lime = rata - apple;
                            melon2 = cherry;
                            salal = (int32_t)*(int8_t *)(melon2 + 13);
                            fig = lime % 256;
                            if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                                goto lab_0x3a5c630;
                            }
                            // 0x6d8
                            tea = legume;
                            *(int8_t *)(cherry + 12) = legume;
                            if (tea == 0) {
                                // Detected a possible infinite recursion (goto support failed); quitting...
                            }
                            // 0x6e0
                            if (nectarine == 0) {
                                // Detected a possible infinite recursion (goto support failed); quitting...
                            }
                            // 0x6e4
                            tuna = grape;
                            tea = tuna;
                            banana = *(int32_t *)1832;
                            yucca = tuna;
                            // branch -> 0x6fc
                            while (true) {
                                // 0x6fc
                                nut = yucca - tuna;
                                pear2 = cherry;
                                taro = (int32_t)*(int8_t *)(pear2 + 12);
                                apple2 = nut % 256;
                                if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                    goto lab_0x3a5cae0;
                                }
                                // 0x706
                                grape = yucca;
                                // branch -> 0x708
                                // Detected a possible infinite recursion (goto support failed); quitting...
                            }
                        }
                    }
                }
                // 0x6d8
                tea = legume;
                *(int8_t *)(cherry + 12) = legume;
                if (tea == 0) {
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // 0x6e0
                if (nectarine == 0) {
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // 0x6e4
                tuna = grape;
                tea = tuna;
                banana = *(int32_t *)1832;
                yucca = tuna;
                // branch -> 0x6fc
                while (true) {
                    // 0x6fc
                    nut = yucca - tuna;
                    pear2 = cherry;
                    taro = (int32_t)*(int8_t *)(pear2 + 12);
                    apple2 = nut % 256;
                    if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                        goto lab_0x3a5cae0;
                    }
                    // 0x706
                    grape = yucca;
                    // branch -> 0x708
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
            }
        }
        // 0x6a8
        tea = raisin;
        apple = manis;
        *(int8_t *)(plum2 + 13) = raisin;
        if (tea != 0) {
            // 0x6b2
            if (lulita != 0) {
                // 0x6cc
                pear = *(int32_t *)1832;
                rata = grape;
                // branch -> 0x6ce
                while (true) {
                    // 0x6ce
                    lime = rata - apple;
                    melon2 = cherry;
                    salal = (int32_t)*(int8_t *)(melon2 + 13);
                    fig = lime % 256;
                    if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                        goto lab_0x3a5c630;
                    }
                    // 0x6d8
                    tea = legume;
                    *(int8_t *)(cherry + 12) = legume;
                    if (tea == 0) {
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                    // 0x6e0
                    if (nectarine == 0) {
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                    // 0x6e4
                    tuna = grape;
                    tea = tuna;
                    banana = *(int32_t *)1832;
                    yucca = tuna;
                    // branch -> 0x6fc
                    while (true) {
                        // 0x6fc
                        nut = yucca - tuna;
                        pear2 = cherry;
                        taro = (int32_t)*(int8_t *)(pear2 + 12);
                        apple2 = nut % 256;
                        if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                            goto lab_0x3a5cae0;
                        }
                        // 0x706
                        grape = yucca;
                        // branch -> 0x708
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                }
            }
        }
        // 0x6d8
        tea = legume;
        *(int8_t *)(cherry + 12) = legume;
        if (tea == 0) {
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x6e0
        if (nectarine == 0) {
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x6e4
        tuna = grape;
        tea = tuna;
        banana = *(int32_t *)1832;
        yucca = tuna;
        // branch -> 0x6fc
        while (true) {
            // 0x6fc
            nut = yucca - tuna;
            pear2 = cherry;
            taro = (int32_t)*(int8_t *)(pear2 + 12);
            apple2 = nut % 256;
            if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                goto lab_0x3a5cae0;
            }
            // 0x706
            grape = yucca;
            // branch -> 0x708
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
    }
    // 0x634
    tea = (int32_t)Prnt;
    grape2 = *(int32_t *)1828;
    banana = grape2;
    apricot2 = *(int32_t *)1832;
    tomato = apricot2;
    jackfruit = (int32_t)*(int8_t *)(chickoo + 5);
    plum2 = chickoo;
    if (jackfruit + -2 - (int32_t)Prnt <= jackfruit && jackfruit != (int32_t)Prnt) {
        lemon2 = chickoo;
        tomato2 = grape2;
        cherry2 = (int32_t)Prnt;
        while (true) {
            // 0x63c
            papaya = cherry2 + apricot2;
            tea2 = (int8_t *)(papaya + 744);
            if (*(int8_t *)((int32_t)*tea2 + tomato2 + 1572) == 0) {
                banana2 = lemon2;
                grape3 = cherry2;
                goto lab_0x22d1380;
            }
            goto lab_0x22b6d30;
        }
    }
    // 0x684
    manis = grape;
    banana = manis;
    abaca2 = *(int32_t *)1828;
    apple = abaca2;
    peach2 = *(int32_t *)1832;
    apricot = peach2;
    if (*(int8_t *)(plum2 + 5) > 1) {
        while (true) {
            int32_t tangerine3 = abaca2 + (int32_t)*(int8_t *)(744 + peach2); // bp+692
            *(int8_t *)(manis + plum2) = *(int8_t *)(tangerine3 + 1572);
            duku = (grape + 1) % 0x10000;
            grape = duku;
            orange2 = cherry;
            tampoi = duku - banana;
            luma = (int32_t)*(int8_t *)(orange2 + 5);
            eddo = tampoi % 256;
            if (luma - 1 + ((tampoi || -256) ^ 255) <= luma && luma != eddo) {
                goto lab_0x22da6e0;
            }
            // 0x6a8
            tea = raisin;
            apple = duku;
            *(int8_t *)(orange2 + 13) = raisin;
            if (tea != 0) {
                // 0x6b2
                if (lulita != 0) {
                    // 0x6cc
                    pear = *(int32_t *)1832;
                    rata = grape;
                    // branch -> 0x6ce
                    while (true) {
                        // 0x6ce
                        lime = rata - apple;
                        melon2 = cherry;
                        salal = (int32_t)*(int8_t *)(melon2 + 13);
                        fig = lime % 256;
                        if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                            goto lab_0x3a5c630;
                        }
                        // 0x6d8
                        tea = legume;
                        *(int8_t *)(cherry + 12) = legume;
                        if (tea == 0) {
                            // Detected a possible infinite recursion (goto support failed); quitting...
                        }
                        // 0x6e0
                        if (nectarine == 0) {
                            // Detected a possible infinite recursion (goto support failed); quitting...
                        }
                        // 0x6e4
                        tuna = grape;
                        tea = tuna;
                        banana = *(int32_t *)1832;
                        yucca = tuna;
                        // branch -> 0x6fc
                        while (true) {
                            // 0x6fc
                            nut = yucca - tuna;
                            pear2 = cherry;
                            taro = (int32_t)*(int8_t *)(pear2 + 12);
                            apple2 = nut % 256;
                            if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                                goto lab_0x3a5cae0;
                            }
                            // 0x706
                            grape = yucca;
                            // branch -> 0x708
                            // Detected a possible infinite recursion (goto support failed); quitting...
                        }
                    }
                }
            }
            // 0x6d8
            tea = legume;
            *(int8_t *)(cherry + 12) = legume;
            if (tea == 0) {
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x6e0
            if (nectarine == 0) {
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x6e4
            tuna = grape;
            tea = tuna;
            banana = *(int32_t *)1832;
            yucca = tuna;
            // branch -> 0x6fc
            while (true) {
                // 0x6fc
                nut = yucca - tuna;
                pear2 = cherry;
                taro = (int32_t)*(int8_t *)(pear2 + 12);
                apple2 = nut % 256;
                if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                    goto lab_0x3a5cae0;
                }
                // 0x706
                grape = yucca;
                // branch -> 0x708
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
        }
    }
    // 0x6a8
    tea = raisin;
    apple = manis;
    *(int8_t *)(plum2 + 13) = raisin;
    if (tea != 0) {
        // 0x6b2
        if (lulita != 0) {
            // 0x6cc
            pear = *(int32_t *)1832;
            rata = grape;
            // branch -> 0x6ce
            while (true) {
                // 0x6ce
                lime = rata - apple;
                melon2 = cherry;
                salal = (int32_t)*(int8_t *)(melon2 + 13);
                fig = lime % 256;
                if (salal - 1 + ((lime || -256) ^ 255) <= salal && salal != fig) {
                    goto lab_0x3a5c630;
                }
                // 0x6d8
                tea = legume;
                *(int8_t *)(cherry + 12) = legume;
                if (tea == 0) {
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // 0x6e0
                if (nectarine == 0) {
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // 0x6e4
                tuna = grape;
                tea = tuna;
                banana = *(int32_t *)1832;
                yucca = tuna;
                // branch -> 0x6fc
                while (true) {
                    // 0x6fc
                    nut = yucca - tuna;
                    pear2 = cherry;
                    taro = (int32_t)*(int8_t *)(pear2 + 12);
                    apple2 = nut % 256;
                    if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                        goto lab_0x3a5cae0;
                    }
                    // 0x706
                    grape = yucca;
                    // branch -> 0x708
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
            }
        }
        // 0x6d8
        tea = legume;
        *(int8_t *)(cherry + 12) = legume;
        if (tea == 0) {
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x6e0
        if (nectarine == 0) {
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x6e4
        tuna = grape;
        tea = tuna;
        banana = *(int32_t *)1832;
        yucca = tuna;
        // branch -> 0x6fc
        while (true) {
            // 0x6fc
            nut = yucca - tuna;
            pear2 = cherry;
            taro = (int32_t)*(int8_t *)(pear2 + 12);
            apple2 = nut % 256;
            if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
                goto lab_0x3a5cae0;
            }
            // 0x706
            grape = yucca;
            // branch -> 0x708
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
    }
    // 0x6d8
    tea = legume;
    *(int8_t *)(cherry + 12) = legume;
    if (tea == 0) {
        // Detected a possible infinite recursion (goto support failed); quitting...
    }
    // 0x6e0
    if (nectarine == 0) {
        // Detected a possible infinite recursion (goto support failed); quitting...
    }
    // 0x6e4
    tuna = grape;
    tea = tuna;
    banana = *(int32_t *)1832;
    yucca = tuna;
    // branch -> 0x6fc
    while (true) {
        // 0x6fc
        nut = yucca - tuna;
        pear2 = cherry;
        taro = (int32_t)*(int8_t *)(pear2 + 12);
        apple2 = nut % 256;
        if (taro - 1 + ((nut || -256) ^ 255) <= taro && taro != apple2) {
            goto lab_0x3a5cae0;
        }
        // 0x706
        grape = yucca;
        // branch -> 0x708
        // Detected a possible infinite recursion (goto support failed); quitting...
    }
}

void bitmain_asic_read(void) {
    // bb
    apricot = banana;
    int32_t lulita = *(int32_t *)(apple + 148); // bp+732
    cherry = lulita;
    peach = pear;
    tea = (int32_t)*(int8_t *)(lulita + 837);
    banana = *(int32_t *)2484;
    pear = *(int32_t *)2488;
    grape = -5;
}

void cmd_check(void) {
    int32_t raisin = apple;
    int32_t nectarine = banana;
    cherry = raisin;
    uint8_t legume = *(int8_t *)raisin;
    int32_t jambul = legume;
    apricot = jambul;
    int32_t durian;
    switch (legume) {
        default: {
            int32_t lychee = *(int32_t *)2680;
            apple = lychee;
            banana = jambul;
            function_a6c(lychee, jambul, pear, tea, raisin, nectarine, pear);
            // UNREACHABLE
        }
        case 82: {
            // 0xa06
            durian = ((int32_t)*(int16_t *)(raisin + 2) + 2) % 0x10000;
            grape = durian;
            int32_t achira = durian + raisin;
            int32_t damson = (int32_t)*(int8_t *)achira;
            tea = damson;
            tomato = 256 * (int32_t)*(int8_t *)(achira + 1) | damson;
            // branch -> 0xa3a
            break;
        }
        case 81: {
            // 0xa1c
            tomato = (int32_t)*(int16_t *)(raisin + 22);
            int32_t blackberry = ((int32_t)*(int16_t *)(raisin + 2) + 2) % 0x10000;
            grape = blackberry;
            durian = blackberry;
            // branch -> 0xa3a
            break;
        }
        case 83: {
            // 0xa2a
            tomato = (int32_t)*(int16_t *)(raisin + 10);
            int32_t chickoo = ((int32_t)*(int16_t *)(raisin + 2) + 2) % 0x10000;
            grape = chickoo;
            durian = chickoo;
            // branch -> 0xa3a
            break;
        }
    }
    // 0xa3a
    apple = raisin;
    banana = durian;
}

void bitmain_asic_write(int32_t jackfruit) {
    // bb
    cherry = *(int32_t *)(jackfruit + 148);
    grape = pear;
    uint32_t luma = banana + pear;
    int32_t salal;
    apple = -1 - salal + luma + (int32_t)(luma < banana);
    tea = (int32_t)Prnt;
}

void dump_hex(void) {
    int32_t taro = apple;
    apricot = taro;
    int32_t manis = banana;
    grape = manis;
    cherry = (int32_t)Prnt;
    function_e6a(taro, manis);
}

void hashtest(void) {
    // bb
    melon = apple;
    int32_t rata = banana;
    apricot = (int32_t)Prnt;
    grape = apple + 20;
    pear = apple + 36;
    banana = *(int32_t *)(apple + 40);
    int32_t tuna = *(int32_t *)(apple + 44);
    apple = tuna;
    tomato = llvm_bswap_i32(rata);
    tea = llvm_bswap_i32(tuna);
}

void check_asic_status(void) {
    // bb
    apricot = apple;
    int32_t yucca = *(int32_t *)0x1078;
    banana = (int32_t)*(int16_t *)(yucca + 2124);
    int32_t duku = *(int32_t *)(yucca + 2116);
    cherry = duku;
    int32_t eddo;
    if (duku > -1) {
        // 0xfb4
        eddo = *(int32_t *)0x1078;
        cherry = eddo;
        grape = (int32_t)Prnt;
        tomato = eddo + 2128;
        peach = eddo;
        apple = *(int32_t *)(eddo + 2116);
        return;
    }
    int32_t fig = yucca + 2128;
    apple = fig;
    pear = (int32_t)Prnt;
    int32_t apple2 = yucca + 1572;
    melon = apple2;
    int32_t banana2 = (int32_t)Prnt;
    // branch -> 0xfa4
    while (true) {
        int32_t lemon2 = (int32_t)*(int8_t *)(banana2 + apple2);
        tomato = lemon2;
        tea = (int32_t)Prnt;
        int32_t plum2 = fig;
        int32_t orange2 = banana2;
        int32_t melon2;
        int32_t pear2;
        int32_t tea2;
        if (lemon2 <= (int32_t)Prnt) {
            int32_t * cherry2 = (int32_t *)(fig + 4 * (int32_t)Prnt); // 0x19716
            *cherry2 = *cherry2 / 4;
            int32_t grape2 = tea + 1; // 0xf9420
            tea = grape2;
            if (grape2 >= tomato) {
                int32_t * apricot2 = (int32_t *)(4 * grape2 + apple); // bp+197
                *apricot2 = *apricot2 / 4;
                int32_t tomato2 = tea + 1;
                tea = tomato2;
                while (tomato2 >= tomato) {
                    // 0xf8a
                    apricot2 = (int32_t *)(4 * tomato2 + apple);
                    *apricot2 = *apricot2 / 4;
                    tomato2 = tea + 1;
                    tea = tomato2;
                    // continue -> 0xf8a
                }
                // 0xf96
                plum2 = apple;
                orange2 = pear;
                // branch -> 0xf9a
                // 0xf9a
              lab_0x23c8a10:
                tea2 = orange2 + 1;
                pear = tea2;
                melon2 = plum2 + 1024;
                apple = melon2;
                if (tea2 == 16) {
                    // 0xfac
                    pear2 = *(int32_t *)0x1078;
                    tea = pear2;
                    *(int32_t *)(pear2 + 2116) = cherry / 4;
                    // branch -> 0xfb4
                    // 0xfb4
                    eddo = *(int32_t *)0x1078;
                    cherry = eddo;
                    grape = (int32_t)Prnt;
                    tomato = eddo + 2128;
                    peach = eddo;
                    apple = *(int32_t *)(eddo + 2116);
                    return;
                }
                // 0xf9a
              lab_0x23cc010:
                apple2 = melon;
                fig = melon2;
                banana2 = tea2;
                // branch -> 0xfa4
                continue;
            }
            // 0xf96
            goto lab_0x23c8a10;
        }
        // 0xf9a
        tea2 = orange2 + 1;
        pear = tea2;
        melon2 = plum2 + 1024;
        apple = melon2;
        if (tea2 != 16) {
            goto lab_0x23cc010;
        }
        // 0xfac
        pear2 = *(int32_t *)0x1078;
        tea = pear2;
        *(int32_t *)(pear2 + 2116) = cherry / 4;
        // branch -> 0xfb4
        // 0xfb4
        eddo = *(int32_t *)0x1078;
        cherry = eddo;
        grape = (int32_t)Prnt;
        tomato = eddo + 2128;
        peach = eddo;
        apple = *(int32_t *)(eddo + 2116);
        return;
    }
}

void ChangePWM(void) {
    // bb
    grape = apple;
    apple = 9 * banana;
    banana = (int32_t)function_a;
}

void bitmain_asic_close(void) {
    // bb
    banana = (int32_t)Prnt;
    int32_t abaca2 = *(int32_t *)0x1110; // 0x10cc
    cherry = abaca2;
    int32_t peach2 = abaca2 + 8; // 0x10ce
    grape = peach2;
    apple = peach2;
}

void adjust_pwm_from_temp(void) {
    // 0x117e
    banana = (int32_t)Prnt;
    grape = apple;
    orange = (int32_t)*(int8_t *)(apple + 219);
    int32_t papaya = (int32_t)*(int8_t *)(apple + 736) + apple; // 0x112c
    int32_t grape2 = (int32_t)*(int8_t *)(papaya + 785); // 0x112e
    cherry = grape2;
    peach = 1;
    abaca = (int32_t)*(int8_t *)*(int32_t *)0x11e4 ^ 255;
    tea = 1;
    pear = grape2;
    *(int8_t *)(apple + 845) = 1;
    apple = *(int32_t *)0x11e8;
}

void init_beep(void) {
    // bb
    banana = 1024;
    grape = apple;
    pear = (int32_t)Prnt;
    apple = *(int32_t *)0x12b0;
}

void bitmain_asic_open(void) {
    // bb
    grape = banana;
    apple = (int32_t)Prnt;
    banana = *(int32_t *)0x1444;
}

void beep(void) {
    int32_t tampoi = apple; // 0x1486
    int32_t lime;
    if (*(int8_t *)(tampoi + 847) == 0) {
        // 0x14ea
        if (*(int8_t *)(tampoi + 848) != 0) {
            // 0x14f0
            // branch -> 0x14f6
            // 0x14f6
            if (*(int32_t *)(*(int32_t *)0x151c + 24) != 0) {
                // 0x14fa
                melon = 0x14fd;
                // branch -> 0x14fc
            }
            // 0x14fc
            pear = 0x100000;
            *(int32_t *)(*(int32_t *)(*(int32_t *)0x1520 + 2060) + 400) = 0x100000;
            lime = (int32_t)Prnt;
            // branch -> 0x150c
            // 0x150c
            tea = lime;
            *(int8_t *)(tampoi + 848) = (int8_t)lime;
            // branch -> 0x1510
        }
        // 0x1510
        return;
    }
    int32_t nut = *(int32_t *)0x1514; // 0x148e
    tea = nut;
    int32_t mango = *(int32_t *)0x1518; // 0x1490
    pear = mango;
    int32_t * avocado = (int32_t *)(nut + 1140); // bp+248
    int32_t raspberry = mango; // 0x149e
    if (*avocado == 0) {
        // 0x1498
        *avocado = *(int32_t *)mango;
        nut = tea;
        raspberry = pear;
        // branch -> 0x149e
    }
    int32_t tangerine = *(int32_t *)0x1514; // 0x14a8
    if (*(int32_t *)(nut + 1140) - *(int32_t *)raspberry <= 0xffffffff) {
        uint8_t lulita = *(int8_t *)(tampoi + 848); // 0x14ae
        apple = lulita;
        tea = *(int32_t *)0x151c;
        int32_t raisin = *(int32_t *)*(int32_t *)0x1518; // 0x14b4
        if (lulita == 0) {
            int32_t nectarine = raisin + 256; // 0x14b8
            banana = nectarine;
            *(int32_t *)(tangerine + 1140) = nectarine;
            if (*(int32_t *)(tea + 24) != 0) {
                // 0x14c8
                melon = 0x14cb;
                // branch -> 0x14ca
            }
            // 0x14ca
            pear = 0x100000;
            *(int32_t *)(*(int32_t *)(*(int32_t *)0x1520 + 2060) + 404) = 0x100000;
            lime = 1;
            // branch -> 0x150c
        } else {
            int32_t legume = raisin + 1024; // 0x14dc
            banana = legume;
            *(int32_t *)(tangerine + 1140) = legume;
            // branch -> 0x14f6
            // 0x14f6
            if (*(int32_t *)(tea + 24) != 0) {
                // 0x14fa
                melon = 0x14fd;
                // branch -> 0x14fc
            }
            // 0x14fc
            pear = 0x100000;
            *(int32_t *)(*(int32_t *)(*(int32_t *)0x1520 + 2060) + 400) = 0x100000;
            lime = (int32_t)Prnt;
            // branch -> 0x150c
        }
        // 0x150c
        tea = lime;
        *(int8_t *)(tampoi + 848) = (int8_t)lime;
        // branch -> 0x1510
    }
}

void check_fan_speed(void) {
    uint32_t jambul = (int32_t)*(int8_t *)(apple + 218); // 0x1524
    pear = jambul;
    int32_t durian;
    if (jambul > (int32_t)Prnt) {
        // 0x153a
        durian = (int32_t)Prnt == jambul ? 1 : (int32_t)Prnt;
        tea = durian;
        *(int8_t *)(apple + 846) = (int8_t)durian;
        return;
    }
    int32_t lychee = (int32_t)Prnt; // 0x1540
    int32_t achira; // 0x1540
    while (true) {
        uint8_t damson = *(int8_t *)(lychee + apple + 753); // 0x152e
        int32_t blackberry = lychee; // 0x153a
        if (*(int8_t *)((int32_t)damson + apple + 769) == 0) {
            // 0x1540
            achira = lychee + 1;
            if (achira < jambul) {
                // break -> 0x153a
                break;
            }
            lychee = achira;
            // continue -> 0x152c
            continue;
        }
        // 0x153a
        durian = blackberry == jambul ? 1 : (int32_t)Prnt;
        tea = durian;
        *(int8_t *)(apple + 846) = (int8_t)durian;
        return;
    }
    // 0x153a
    durian = achira == jambul ? 1 : (int32_t)Prnt;
    tea = durian;
    *(int8_t *)(apple + 846) = (int8_t)durian;
}

void send_to_pfga_work(void) {
    // bb
    cherry = apple;
    tea = (int32_t)*(int8_t *)(apple + 721);
}

void sha2_starts(struct struct_0 chickoo) {
    int32_t jackfruit = chickoo.e0;
    apple = jackfruit;
    tea = (int32_t)Prnt;
    *(int32_t *)jackfruit = (int32_t)Prnt;
    *(int32_t *)(apple + 4) = tea;
    *(int32_t *)(apple + 8) = *(int32_t *)0x1894;
    *(int32_t *)(apple + 12) = *(int32_t *)0x1898;
    *(int32_t *)(apple + 16) = *(int32_t *)0x189c;
    *(int32_t *)(apple + 20) = *(int32_t *)0x18a0;
    *(int32_t *)(apple + 24) = *(int32_t *)0x18a4;
    *(int32_t *)(apple + 28) = *(int32_t *)0x18a8;
    *(int32_t *)(apple + 32) = *(int32_t *)0x18ac;
    int32_t luma = *(int32_t *)0x18b0; // 0x188e
    tea = luma;
    *(int32_t *)(apple + 36) = luma;
}

void sha2_process(int32_t salal, struct struct_1 taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2, int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3, int32_t tampoi, int32_t lime, int8_t nut) {
    // 0x18f4
    apple = salal;
    int32_t mango = taro.e0;
    banana = mango;
    uint32_t avocado = cherry; // 0x18b4
    uint32_t raspberry = grape; // 0x18b4
    int32_t tangerine = abaca; // 0x18b4
    int32_t lulita = (int32_t)*(int8_t *)mango; // 0x18bc
    int32_t raisin = 0x1000000 * lulita | 0x10000 * (int32_t)*(int8_t *)(mango + 1); // 0x18c8
    int32_t nectarine = (int32_t)*(int8_t *)(mango + 3); // 0x18cc
    int32_t legume = (int32_t)*(int8_t *)(mango + 4); // 0x18d8
    int32_t jambul = 0x10000 * (int32_t)*(int8_t *)(mango + 9); // 0x18da
    int32_t durian = 0x1000000 * legume | 0x10000 * (int32_t)*(int8_t *)(mango + 5); // 0x18e8
    int32_t lychee = 256 * (int32_t)*(int8_t *)(mango + 2) | nectarine | raisin; // 0x18ee
    abaca = lychee;
    int32_t achira = (int32_t)*(int8_t *)(mango + 6); // 0x18f8
    grape = *(int32_t *)0x1c44;
    orange = 256 * achira | (int32_t)*(int8_t *)(mango + 7) | durian;
    int32_t damson = (int32_t)*(int8_t *)(mango + 8); // 0x1904
    int32_t blackberry = (int32_t)*(int8_t *)(mango + 11); // 0x190a
    int32_t chickoo = 0x1000000 * damson | jambul | blackberry; // 0x190c
    int32_t jackfruit = (int32_t)*(int8_t *)(banana + 12); // 0x1910
    plum = chickoo | 256 * (int32_t)*(int8_t *)(mango + 10);
    int32_t luma = 0x1000000 * jackfruit | 0x10000 * (int32_t)*(int8_t *)(mango + 13); // 0x1916
    int32_t salal2 = (int32_t)*(int8_t *)(banana + 15); // 0x191a
    int32_t taro2 = 256 * (int32_t)*(int8_t *)(banana + 14) | luma | salal2; // 0x1922
    int32_t manis2 = (int32_t)*(int8_t *)(banana + 16); // 0x192c
    int32_t rata2 = 0x1000000 * manis2 | 0x10000 * (int32_t)*(int8_t *)(banana + 17); // 0x1932
    int32_t tuna2 = (int32_t)*(int8_t *)(banana + 19); // 0x1936
    int32_t yucca2 = 256 * (int32_t)*(int8_t *)(banana + 18) | rata2 | tuna2; // 0x193e
    int32_t duku2 = (int32_t)*(int8_t *)(banana + 20); // 0x1948
    int32_t eddo2 = 0x1000000 * duku2 | 0x10000 * (int32_t)*(int8_t *)(banana + 21); // 0x194e
    int32_t fig2 = (int32_t)*(int8_t *)(banana + 23); // 0x1952
    int32_t apple3 = 256 * (int32_t)*(int8_t *)(banana + 22) | eddo2 | fig2; // 0x195a
    int32_t banana3 = (int32_t)*(int8_t *)(banana + 24); // 0x1964
    int32_t lemon3 = 0x1000000 * banana3 | 0x10000 * (int32_t)*(int8_t *)(banana + 25); // 0x196a
    int32_t plum3 = (int32_t)*(int8_t *)(banana + 27); // 0x196e
    int32_t orange3 = 256 * (int32_t)*(int8_t *)(banana + 26) | lemon3 | plum3; // 0x1976
    int32_t melon3 = (int32_t)*(int8_t *)(banana + 28); // 0x197e
    int32_t pear3 = 0x1000000 * melon3 | 0x10000 * (int32_t)*(int8_t *)(banana + 29); // 0x1982
    int32_t tea3 = (int32_t)*(int8_t *)(banana + 31); // 0x1986
    int32_t cherry3 = 256 * (int32_t)*(int8_t *)(banana + 30) | pear3 | tea3; // 0x198c
    int32_t grape4 = (int32_t)*(int8_t *)(banana + 32); // 0x1996
    int32_t apricot3 = 0x1000000 * grape4 | 0x10000 * (int32_t)*(int8_t *)(banana + 33); // 0x199c
    int32_t tomato3 = (int32_t)*(int8_t *)(banana + 35); // 0x19a0
    int32_t abaca3 = 256 * (int32_t)*(int8_t *)(banana + 34) | apricot3 | tomato3; // 0x19aa
    int32_t peach3 = (int32_t)*(int8_t *)(banana + 36); // 0x19b4
    int32_t papaya2 = 0x1000000 * peach3 | 0x10000 * (int32_t)*(int8_t *)(banana + 37); // 0x19ba
    int32_t grape5 = (int32_t)*(int8_t *)(banana + 39); // 0x19be
    int32_t tampoi2 = 256 * (int32_t)*(int8_t *)(banana + 38) | papaya2 | grape5; // 0x19c8
    int32_t lime2 = (int32_t)*(int8_t *)(banana + 40); // 0x19d2
    int32_t nut2 = 0x1000000 * lime2 | 0x10000 * (int32_t)*(int8_t *)(banana + 41); // 0x19d8
    int32_t mango2 = (int32_t)*(int8_t *)(banana + 43); // 0x19dc
    int32_t avocado2 = 256 * (int32_t)*(int8_t *)(banana + 42) | nut2 | mango2; // 0x19e6
    int32_t raspberry2 = (int32_t)*(int8_t *)(banana + 44); // 0x19f0
    int32_t tangerine2 = 0x1000000 * raspberry2 | 0x10000 * (int32_t)*(int8_t *)(banana + 45); // 0x19f6
    int32_t lulita2 = (int32_t)*(int8_t *)(banana + 47); // 0x19fa
    int32_t raisin2 = 256 * (int32_t)*(int8_t *)(banana + 46) | tangerine2 | lulita2; // 0x1a04
    int32_t nectarine2 = (int32_t)*(int8_t *)(banana + 48); // 0x1a0e
    int32_t legume2 = 0x1000000 * nectarine2 | 0x10000 * (int32_t)*(int8_t *)(banana + 49); // 0x1a14
    int32_t jambul2 = (int32_t)*(int8_t *)(banana + 51); // 0x1a18
    int32_t durian2 = 256 * (int32_t)*(int8_t *)(banana + 50) | legume2 | jambul2; // 0x1a22
    int32_t lychee2 = (int32_t)*(int8_t *)(banana + 52); // 0x1a2c
    int32_t achira2 = 0x1000000 * lychee2 | 0x10000 * (int32_t)*(int8_t *)(banana + 53); // 0x1a32
    int32_t damson2 = (int32_t)*(int8_t *)(banana + 55); // 0x1a36
    int32_t blackberry2 = 256 * (int32_t)*(int8_t *)(banana + 54) | achira2 | damson2; // 0x1a40
    int32_t chickoo2 = (int32_t)*(int8_t *)(banana + 56); // 0x1a4a
    uint32_t jackfruit2 = *(int32_t *)(apple + 8); // 0x1a4e
    uint32_t luma2 = 0x1000000 * chickoo2 | 0x10000 * (int32_t)*(int8_t *)(banana + 57); // 0x1a54
    int32_t salal3 = (int32_t)*(int8_t *)(banana + 59); // 0x1a58
    uint32_t taro3 = 256 * (int32_t)*(int8_t *)(banana + 58) | salal3 | luma2; // 0x1a68
    int32_t manis3 = (int32_t)*(int8_t *)(banana + 60); // 0x1a72
    uint32_t rata3 = *(int32_t *)(salal + 24); // 0x1a76
    int32_t tuna3 = *(int32_t *)(salal + 32); // 0x1a7a
    uint32_t yucca3 = 0x1000000 * manis3 | 0x10000 * (int32_t)*(int8_t *)(banana + 61); // 0x1a7c
    int32_t duku3 = (int32_t)*(int8_t *)(banana + 63); // 0x1a80
    int32_t eddo3 = *(int32_t *)(salal + 28); // 0x1a84
    uint32_t fig3 = 256 * (int32_t)*(int8_t *)(banana + 62) | duku3 | yucca3; // 0x1a90
    int32_t apple4 = *(int32_t *)(salal + 12); // 0x1a96
    int32_t banana4 = *(int32_t *)(salal + 16); // 0x1aa0
    int32_t lemon4 = *(int32_t *)(salal + 36); // 0x1aa4
    int32_t plum4 = *(int32_t *)0x1c48; // 0x1aa8
    int32_t orange4 = lemon4 + ((eddo3 ^ tuna3) & rata3 ^ tuna3) + plum4 + abaca + ((rata3 / 2048 | 0x200000 * rata3) ^ (rata3 / 64 | 0x4000000 * rata3) ^ (rata3 / 0x2000000 | 128 * rata3)); // 0x1acc
    uint32_t melon4 = orange4 + *(int32_t *)(salal + 20); // 0x1adc
    banana = melon4;
    abaca = taro2;
    uint32_t pear4 = orange4 + ((apple4 | jackfruit2) & banana4 | apple4 & jackfruit2) + ((jackfruit2 / 0x2000 | 0x80000 * jackfruit2) ^ (jackfruit2 / 4 | 0x40000000 * jackfruit2) ^ (jackfruit2 / 0x400000 | 1024 * jackfruit2)); // 0x1afe
    apricot = pear4;
    int32_t tea4 = grape + tuna3 + (melon4 & (eddo3 ^ rata3) ^ eddo3) + orange + ((melon4 / 2048 | 0x200000 * melon4) ^ (melon4 / 64 | 0x4000000 * melon4) ^ (melon4 / 0x2000000 | 128 * melon4)); // 0x1b1a
    uint32_t cherry4 = tea4 + banana4; // 0x1b1e
    pear = cherry4;
    int32_t grape6 = pear4 & jackfruit2; // 0x1b28
    int32_t apricot4 = (pear4 | jackfruit2) & apple4; // 0x1b2a
    int32_t tomato4 = *(int32_t *)0x1c4c; // 0x1b2c
    uint32_t abaca4 = tea4 + (apricot4 | grape6) + ((pear4 / 0x2000 | 0x80000 * pear4) ^ (pear4 / 4 | 0x40000000 * pear4) ^ (pear4 / 0x400000 | 1024 * pear4)); // 0x1b44
    grape = abaca4;
    lemon = apple3;
    int32_t peach4 = tomato4 + eddo3 + plum + ((melon4 ^ rata3) & cherry4 ^ rata3) + ((cherry4 / 2048 | 0x200000 * cherry4) ^ (cherry4 / 64 | 0x4000000 * cherry4) ^ (cherry4 / 0x2000000 | 128 * cherry4)); // 0x1b64
    uint32_t papaya3 = peach4 + apple4; // 0x1b66
    tea = papaya3;
    uint32_t grape7 = ((pear4 | abaca4) & jackfruit2 | pear4 & abaca4) + peach4 + ((abaca4 / 0x2000 | 0x80000 * abaca4) ^ (abaca4 / 4 | 0x40000000 * abaca4) ^ (abaca4 / 0x400000 | 1024 * abaca4)); // 0x1b84
    cherry = grape7;
    int32_t tampoi3 = *(int32_t *)0x1c50; // 0x1b86
    int32_t lime3 = tampoi3 + rata3 + abaca + ((cherry4 ^ melon4) & papaya3 ^ melon4) + ((papaya3 / 2048 | 0x200000 * papaya3) ^ (papaya3 / 64 | 0x4000000 * papaya3) ^ (papaya3 / 0x2000000 | 128 * papaya3)); // 0x1bac
    uint32_t nut3 = lime3 + jackfruit2; // 0x1bae
    tomato = nut3;
    uint32_t mango3 = ((abaca4 | grape7) & pear4 | grape7 & abaca4) + lime3 + ((grape7 / 0x2000 | 0x80000 * grape7) ^ (grape7 / 4 | 0x40000000 * grape7) ^ (grape7 / 0x400000 | 1024 * grape7)); // 0x1bce
    apple = mango3;
    int32_t avocado3 = *(int32_t *)0x1c54; // 0x1bd0
    int32_t raspberry3 = avocado3 + yucca2 + banana + ((papaya3 ^ cherry4) & nut3 ^ cherry4) + ((nut3 / 2048 | 0x200000 * nut3) ^ (nut3 / 64 | 0x4000000 * nut3) ^ (nut3 / 0x2000000 | 128 * nut3)); // 0x1bf8
    uint32_t tangerine3 = apricot + raspberry3; // 0x1c0a
    int32_t lulita3 = papaya3 ^ nut3; // 0x1c12
    uint32_t raisin3 = raspberry3 + (grape7 & mango3 | (mango3 | grape7) & abaca4) + ((mango3 / 0x2000 | 0x80000 * mango3) ^ (mango3 / 4 | 0x40000000 * mango3) ^ (mango3 / 0x400000 | 1024 * mango3)); // 0x1c16
    banana = raisin3;
    int32_t nectarine3 = *(int32_t *)0x1c58; // 0x1c18
    int32_t legume3 = lemon + nectarine3 + (tangerine3 & lulita3 ^ papaya3) + pear + ((tangerine3 / 2048 | 0x200000 * tangerine3) ^ (tangerine3 / 64 | 0x4000000 * tangerine3) ^ (tangerine3 / 0x2000000 | 128 * tangerine3)); // 0x1c5c
    uint32_t jambul3 = legume3 + grape; // 0x1c6e
    uint32_t durian3 = legume3 + ((raisin3 | mango3) & grape7 | raisin3 & mango3) + ((raisin3 / 0x2000 | 0x80000 * raisin3) ^ (raisin3 / 4 | 0x40000000 * raisin3) ^ (raisin3 / 0x400000 | 1024 * raisin3)); // 0x1c7a
    pear = durian3;
    int32_t lychee3 = *(int32_t *)0x20a4; // 0x1c7c
    int32_t achira3 = lychee3 + orange3 + tea + ((tomato ^ tangerine3) & jambul3 ^ tomato) + ((jambul3 / 2048 | 0x200000 * jambul3) ^ (jambul3 / 64 | 0x4000000 * jambul3) ^ (jambul3 / 0x2000000 | 128 * jambul3)); // 0x1ca4
    uint32_t damson3 = achira3 + cherry; // 0x1cb6
    int32_t blackberry3 = tangerine3 ^ jambul3; // 0x1cbe
    uint32_t chickoo3 = achira3 + (apple & (durian3 | raisin3) | durian3 & raisin3) + ((durian3 / 0x2000 | 0x80000 * durian3) ^ (durian3 / 4 | 0x40000000 * durian3) ^ (durian3 / 0x400000 | 1024 * durian3)); // 0x1cc2
    int32_t jackfruit3 = *(int32_t *)0x20a8; // 0x1cc4
    int32_t luma3 = tomato + cherry3 + jackfruit3 + (blackberry3 & damson3 ^ tangerine3) + ((damson3 / 2048 | 0x200000 * damson3) ^ (damson3 / 64 | 0x4000000 * damson3) ^ (damson3 / 0x2000000 | 128 * damson3)); // 0x1cee
    uint32_t salal4 = luma3 + apple; // 0x1d00
    uint32_t taro4 = luma3 + (banana & (chickoo3 | durian3) | chickoo3 & durian3) + ((chickoo3 / 0x2000 | 0x80000 * chickoo3) ^ (chickoo3 / 4 | 0x40000000 * chickoo3) ^ (chickoo3 / 0x400000 | 1024 * chickoo3)); // 0x1d0c
    abaca = taro4;
    int32_t manis4 = *(int32_t *)0x207c; // 0x1d0e
    int32_t rata4 = tangerine3 + abaca3 + manis4 + ((jambul3 ^ damson3) & salal4 ^ jambul3) + ((salal4 / 2048 | 0x200000 * salal4) ^ (salal4 / 64 | 0x4000000 * salal4) ^ (salal4 / 0x2000000 | 128 * salal4)); // 0x1d34
    uint32_t tuna4 = rata4 + banana; // 0x1d46
    int32_t yucca4 = damson3 ^ salal4; // 0x1d4e
    uint32_t duku4 = rata4 + (pear & (taro4 | chickoo3) | taro4 & chickoo3) + ((taro4 / 0x2000 | 0x80000 * taro4) ^ (taro4 / 4 | 0x40000000 * taro4) ^ (taro4 / 0x400000 | 1024 * taro4)); // 0x1d52
    apricot = duku4;
    int32_t eddo4 = *(int32_t *)0x2080; // 0x1d54
    int32_t fig4 = jambul3 + tampoi2 + eddo4 + (yucca4 & tuna4 ^ damson3) + ((tuna4 / 2048 | 0x200000 * tuna4) ^ (tuna4 / 64 | 0x4000000 * tuna4) ^ (tuna4 / 0x2000000 | 128 * tuna4)); // 0x1d7a
    uint32_t apple5 = fig4 + pear; // 0x1d8c
    uint32_t banana5 = fig4 + (taro4 & duku4 | chickoo3 & (duku4 | taro4)) + ((duku4 / 0x2000 | 0x80000 * duku4) ^ (duku4 / 4 | 0x40000000 * duku4) ^ (duku4 / 0x400000 | 1024 * duku4)); // 0x1d98
    grape = banana5;
    int32_t lemon5 = *(int32_t *)0x2084; // 0x1d9a
    int32_t plum5 = damson3 + avocado2 + lemon5 + ((salal4 ^ tuna4) & apple5 ^ salal4) + ((apple5 / 2048 | 0x200000 * apple5) ^ (apple5 / 64 | 0x4000000 * apple5) ^ (apple5 / 0x2000000 | 128 * apple5)); // 0x1dc2
    uint32_t orange5 = plum5 + chickoo3; // 0x1dd4
    int32_t melon5 = tuna4 ^ apple5; // 0x1ddc
    uint32_t pear5 = plum5 + (duku4 & banana5 | (banana5 | duku4) & taro4) + ((banana5 / 0x2000 | 0x80000 * banana5) ^ (banana5 / 4 | 0x40000000 * banana5) ^ (banana5 / 0x400000 | 1024 * banana5)); // 0x1de0
    cherry = pear5;
    int32_t tea5 = *(int32_t *)0x2088; // 0x1de2
    int32_t cherry5 = tea5 + salal4 + raisin2 + (melon5 & orange5 ^ tuna4) + ((orange5 / 2048 | 0x200000 * orange5) ^ (orange5 / 64 | 0x4000000 * orange5) ^ (orange5 / 0x2000000 | 128 * orange5)); // 0x1e08
    uint32_t grape8 = abaca + cherry5; // 0x1e1a
    uint32_t apricot5 = cherry5 + (banana5 & pear5 | (pear5 | banana5) & duku4) + ((pear5 / 0x2000 | 0x80000 * pear5) ^ (pear5 / 4 | 0x40000000 * pear5) ^ (pear5 / 0x400000 | 1024 * pear5)); // 0x1e26
    apple = apricot5;
    int32_t tomato5 = *(int32_t *)0x208c; // 0x1e28
    int32_t abaca5 = tuna4 + durian2 + tomato5 + ((apple5 ^ orange5) & grape8 ^ apple5) + ((grape8 / 2048 | 0x200000 * grape8) ^ (grape8 / 64 | 0x4000000 * grape8) ^ (grape8 / 0x2000000 | 128 * grape8)); // 0x1e4e
    uint32_t peach5 = apricot + abaca5; // 0x1e60
    apricot = peach5;
    int32_t papaya4 = orange5 ^ grape8; // 0x1e68
    uint32_t grape9 = abaca5 + (pear5 & apricot5 | (apricot5 | pear5) & banana5) + ((apricot5 / 0x2000 | 0x80000 * apricot5) ^ (apricot5 / 4 | 0x40000000 * apricot5) ^ (apricot5 / 0x400000 | 1024 * apricot5)); // 0x1e6c
    banana = grape9;
    int32_t tampoi4 = *(int32_t *)0x2090; // 0x1e6e
    int32_t lime4 = tampoi4 + apple5 + blackberry2 + (papaya4 & peach5 ^ orange5) + ((peach5 / 2048 | 0x200000 * peach5) ^ (peach5 / 64 | 0x4000000 * peach5) ^ (peach5 / 0x2000000 | 128 * peach5)); // 0x1e94
    uint32_t nut4 = grape + lime4; // 0x1ea6
    grape = nut4;
    uint32_t mango4 = lime4 + (apricot5 & grape9 | (grape9 | apricot5) & pear5) + ((grape9 / 0x2000 | 0x80000 * grape9) ^ (grape9 / 4 | 0x40000000 * grape9) ^ (grape9 / 0x400000 | 1024 * grape9)); // 0x1eb2
    pear = mango4;
    int32_t avocado4 = *(int32_t *)0x2094; // 0x1eb4
    int32_t raspberry4 = orange5 + taro3 + avocado4 + ((grape8 ^ peach5) & nut4 ^ grape8) + ((nut4 / 2048 | 0x200000 * nut4) ^ (nut4 / 64 | 0x4000000 * nut4) ^ (nut4 / 0x2000000 | 128 * nut4)); // 0x1eda
    uint32_t tangerine4 = cherry + raspberry4; // 0x1eec
    cherry = tangerine4;
    int32_t lulita4 = peach5 ^ nut4; // 0x1ef4
    uint32_t raisin4 = raspberry4 + (grape9 & mango4 | (mango4 | grape9) & apricot5) + ((mango4 / 0x2000 | 0x80000 * mango4) ^ (mango4 / 4 | 0x40000000 * mango4) ^ (mango4 / 0x400000 | 1024 * mango4)); // 0x1ef8
    tea = raisin4;
    int32_t nectarine4 = *(int32_t *)0x2098; // 0x1efa
    int32_t legume4 = nectarine4 + grape8 + fig3 + (lulita4 & tangerine4 ^ peach5) + ((tangerine4 / 2048 | 0x200000 * tangerine4) ^ (tangerine4 / 64 | 0x4000000 * tangerine4) ^ (tangerine4 / 0x2000000 | 128 * tangerine4)); // 0x1f32
    uint32_t jambul4 = legume4 + apple; // 0x1f36
    apple = jambul4;
    uint32_t durian4 = ((raisin4 / 0x2000 | 0x80000 * raisin4) ^ (raisin4 / 4 | 0x40000000 * raisin4) ^ (raisin4 / 0x400000 | 1024 * raisin4)) + ((raisin4 | mango4) & grape9 | raisin4 & mango4) + legume4; // 0x1f38
    peach = durian4;
    int32_t lychee4 = (orange / 0x40000 | 0x4000 * orange) ^ (0x2000000 * orange | orange / 128) ^ orange / 8; // 0x1f68
    int32_t achira4 = (grape ^ tangerine4) & jambul4 ^ grape; // 0x1f6c
    int32_t damson4 = tampoi2 + lychee + ((luma2 / 0x80000 | 0x2000 * taro3) ^ (luma2 / 0x20000 | 0x8000 * taro3) ^ taro3 / 1024) + lychee4; // 0x1f70
    abaca = damson4;
    int32_t blackberry4 = *(int32_t *)0x209c; // 0x1f72
    int32_t chickoo4 = blackberry4 + achira4 + apricot + damson4 + ((jambul4 / 2048 | 0x200000 * jambul4) ^ (jambul4 / 64 | 0x4000000 * jambul4) ^ (jambul4 / 0x2000000 | 128 * jambul4)); // 0x1f8c
    uint32_t jackfruit4 = chickoo4 + banana; // 0x1f9e
    banana = jackfruit4;
    uint32_t luma4 = chickoo4 + (pear & (raisin4 | durian4) | raisin4 & durian4) + ((durian4 / 0x2000 | 0x80000 * durian4) ^ (durian4 / 4 | 0x40000000 * durian4) ^ (durian4 / 0x400000 | 1024 * durian4)); // 0x1faa
    apricot = luma4;
    int32_t salal5 = (plum / 0x40000 | 0x4000 * plum) ^ (0x2000000 * plum | plum / 128) ^ plum / 8; // 0x1fce
    int32_t taro5 = (cherry ^ jambul4) & jackfruit4 ^ cherry; // 0x1fd2
    int32_t manis5 = orange + avocado2 + ((yucca3 / 0x80000 | 0x2000 * fig3) ^ (yucca3 / 0x20000 | 0x8000 * fig3) ^ fig3 / 1024) + salal5; // 0x1fd6
    orange = manis5;
    int32_t rata5 = *(int32_t *)0x20a0; // 0x1fd8
    int32_t tuna5 = tea; // 0x1fec
    int32_t yucca5 = rata5 + taro5 + grape + manis5 + ((jackfruit4 / 2048 | 0x200000 * jackfruit4) ^ (jackfruit4 / 64 | 0x4000000 * jackfruit4) ^ (jackfruit4 / 0x2000000 | 128 * jackfruit4)); // 0x1ff2
    uint32_t duku5 = yucca5 + pear; // 0x2004
    pear = duku5;
    uint32_t eddo5 = yucca5 + (tuna5 & (durian4 | luma4) | durian4 & luma4) + ((luma4 / 0x2000 | 0x80000 * luma4) ^ (luma4 / 4 | 0x40000000 * luma4) ^ (luma4 / 0x400000 | 1024 * luma4)); // 0x2010
    grape = eddo5;
    int32_t fig5 = (abaca / 0x80000 | 0x2000 * abaca) ^ (0x8000 * abaca | abaca / 0x20000) ^ abaca / 1024; // 0x202c
    int32_t apple6 = apple ^ jackfruit4; // 0x2030
    uint32_t banana6 = plum + raisin2 + ((luma / 0x40000 | 0x4000 * taro2) ^ (taro2 / 128 | 0x2000000 * salal2) ^ taro2 / 8) + fig5; // 0x2034
    tomato = banana6;
    int32_t lemon6 = *(int32_t *)0x20ac; // 0x2036
    int32_t plum6 = banana6 + lemon6 + cherry + (apple6 & duku5 ^ apple) + ((duku5 / 2048 | 0x200000 * duku5) ^ (duku5 / 64 | 0x4000000 * duku5) ^ (duku5 / 0x2000000 | 128 * duku5)); // 0x205c
    tea = plum6 + tuna5;
    uint32_t orange6 = plum6 + (peach & (luma4 | eddo5) | luma4 & eddo5) + ((eddo5 / 0x2000 | 0x80000 * eddo5) ^ (eddo5 / 4 | 0x40000000 * eddo5) ^ (eddo5 / 0x400000 | 1024 * eddo5)); // 0x20b0
    cherry = orange6;
    uint32_t melon6 = durian2 + taro2 + ((rata2 / 0x40000 | 0x4000 * yucca2) ^ (yucca2 / 128 | 0x2000000 * tuna2) ^ yucca2 / 8) + ((orange / 0x80000 | 0x2000 * orange) ^ (0x8000 * orange | orange / 0x20000) ^ orange / 1024); // 0x20de
    apple = ((orange6 / 0x2000 | 0x80000 * orange6) ^ (orange6 / 4 | 0x40000000 * orange6) ^ (orange6 / 0x400000 | 1024 * orange6)) + ((eddo5 | orange6) & luma4 | eddo5 & orange6);
    uint32_t pear6 = blackberry2 + yucca2 + ((eddo2 / 0x40000 | 0x4000 * apple3) ^ (apple3 / 128 | 0x2000000 * fig2) ^ apple3 / 8) + ((banana6 / 0x80000 | 0x2000 * banana6) ^ (0x8000 * banana6 | banana6 / 0x20000) ^ banana6 / 1024); // 0x215c
    uint32_t tea6 = taro3 + apple3 + ((lemon3 / 0x40000 | 0x4000 * orange3) ^ (orange3 / 128 | 0x2000000 * plum3) ^ orange3 / 8) + ((melon6 / 0x80000 | 0x2000 * melon6) ^ (melon6 / 0x20000 | 0x8000 * melon6) ^ melon6 / 1024); // 0x21e6
    uint32_t cherry6 = fig3 + orange3 + ((pear3 / 0x40000 | 0x4000 * cherry3) ^ (cherry3 / 128 | 0x2000000 * tea3) ^ cherry3 / 8) + ((pear6 / 0x80000 | 0x2000 * pear6) ^ (pear6 / 0x20000 | 0x8000 * pear6) ^ pear6 / 1024); // 0x2270
    uint32_t grape10 = abaca + cherry3 + ((apricot3 / 0x40000 | 0x4000 * abaca3) ^ (abaca3 / 128 | 0x2000000 * tomato3) ^ abaca3 / 8) + ((tea6 / 0x80000 | 0x2000 * tea6) ^ (tea6 / 0x20000 | 0x8000 * tea6) ^ tea6 / 1024); // 0x22ee
    uint32_t apricot6 = orange + abaca3 + ((papaya2 / 0x40000 | 0x4000 * tampoi2) ^ (tampoi2 / 128 | 0x2000000 * grape5) ^ tampoi2 / 8) + ((cherry6 / 0x80000 | 0x2000 * cherry6) ^ (cherry6 / 0x20000 | 0x8000 * cherry6) ^ cherry6 / 1024); // 0x236e
    uint32_t tomato6 = banana6 + tampoi2 + ((nut2 / 0x40000 | 0x4000 * avocado2) ^ (avocado2 / 128 | 0x2000000 * mango2) ^ avocado2 / 8) + ((grape10 / 0x80000 | 0x2000 * grape10) ^ (grape10 / 0x20000 | 0x8000 * grape10) ^ grape10 / 1024); // 0x23ec
    uint32_t abaca6 = melon6 + avocado2 + ((tangerine2 / 0x40000 | 0x4000 * raisin2) ^ (raisin2 / 128 | 0x2000000 * lulita2) ^ raisin2 / 8) + ((apricot6 / 0x80000 | 0x2000 * apricot6) ^ (apricot6 / 0x20000 | 0x8000 * apricot6) ^ apricot6 / 1024); // 0x246e
    uint32_t peach6 = pear6 + raisin2 + ((legume2 / 0x40000 | 0x4000 * durian2) ^ (durian2 / 128 | 0x2000000 * jambul2) ^ durian2 / 8) + ((tomato6 / 0x80000 | 0x2000 * tomato6) ^ (tomato6 / 0x20000 | 0x8000 * tomato6) ^ tomato6 / 1024); // 0x24f2
    uint32_t papaya5 = tea6 + durian2 + ((achira2 / 0x40000 | 0x4000 * blackberry2) ^ (blackberry2 / 128 | 0x2000000 * damson2) ^ blackberry2 / 8) + ((abaca6 / 0x80000 | 0x2000 * abaca6) ^ (abaca6 / 0x20000 | 0x8000 * abaca6) ^ abaca6 / 1024); // 0x2574
    uint32_t grape11 = cherry6 + blackberry2 + ((luma2 / 0x40000 | 0x4000 * taro3) ^ (taro3 / 128 | 0x2000000 * salal3) ^ taro3 / 8) + ((peach6 / 0x80000 | 0x2000 * peach6) ^ (peach6 / 0x20000 | 0x8000 * peach6) ^ peach6 / 1024); // 0x25f6
    int32_t tampoi5 = (papaya5 / 0x80000 | 0x2000 * papaya5) ^ (papaya5 / 0x20000 | 0x8000 * papaya5) ^ papaya5 / 1024; // 0x2670
    uint32_t lime5 = grape10 + taro3 + ((yucca3 / 0x40000 | 0x4000 * fig3) ^ (fig3 / 128 | 0x2000000 * duku3) ^ fig3 / 8) + tampoi5; // 0x2678
    uint32_t nut5 = apricot6 + fig3 + ((abaca / 0x40000 | 0x4000 * abaca) ^ (abaca / 128 | 0x2000000 * abaca) ^ abaca / 8) + ((grape11 / 0x80000 | 0x2000 * grape11) ^ (grape11 / 0x20000 | 0x8000 * grape11) ^ grape11 / 1024); // 0x26f6
    uint32_t mango5 = tomato6 + abaca + ((orange / 0x40000 | 0x4000 * orange) ^ (orange / 128 | 0x2000000 * orange) ^ orange / 8) + ((lime5 / 0x80000 | 0x2000 * lime5) ^ (lime5 / 0x20000 | 0x8000 * lime5) ^ lime5 / 1024); // 0x276e
    uint32_t avocado5 = abaca6 + orange + ((tomato / 0x40000 | 0x4000 * tomato) ^ (0x2000000 * tomato | tomato / 128) ^ tomato / 8) + ((nut5 / 0x80000 | 0x2000 * nut5) ^ (nut5 / 0x20000 | 0x8000 * nut5) ^ nut5 / 1024); // 0x27dc
    uint32_t raspberry5 = ((mango5 / 0x80000 | 0x2000 * mango5) ^ (mango5 / 0x20000 | 0x8000 * mango5) ^ mango5 / 1024) + tomato + peach6 + ((melon6 / 0x40000 | 0x4000 * melon6) ^ (melon6 / 128 | 0x2000000 * melon6) ^ melon6 / 8); // 0x284a
    int32_t tangerine5 = (avocado5 / 0x80000 | 0x2000 * avocado5) ^ (avocado5 / 0x20000 | 0x8000 * avocado5) ^ avocado5 / 1024; // 0x28b8
    uint32_t lulita5 = tangerine5 + ((pear6 / 0x40000 | 0x4000 * pear6) ^ (pear6 / 128 | 0x2000000 * pear6) ^ pear6 / 8) + papaya5 + melon6; // 0x28bc
    uint32_t raisin5 = grape11 + pear6 + ((tea6 / 0x40000 | 0x4000 * tea6) ^ (tea6 / 128 | 0x2000000 * tea6) ^ tea6 / 8) + ((raspberry5 / 0x80000 | 0x2000 * raspberry5) ^ (raspberry5 / 0x20000 | 0x8000 * raspberry5) ^ raspberry5 / 1024); // 0x293c
    uint32_t nectarine5 = lime5 + tea6 + ((cherry6 / 0x40000 | 0x4000 * cherry6) ^ (cherry6 / 128 | 0x2000000 * cherry6) ^ cherry6 / 8) + ((lulita5 / 0x80000 | 0x2000 * lulita5) ^ (lulita5 / 0x20000 | 0x8000 * lulita5) ^ lulita5 / 1024); // 0x29ac
    uint32_t legume5 = nut5 + cherry6 + ((grape10 / 0x40000 | 0x4000 * grape10) ^ (grape10 / 128 | 0x2000000 * grape10) ^ grape10 / 8) + ((raisin5 / 0x80000 | 0x2000 * raisin5) ^ (raisin5 / 0x20000 | 0x8000 * raisin5) ^ raisin5 / 1024); // 0x2a20
    uint32_t jambul5 = mango5 + grape10 + ((apricot6 / 0x40000 | 0x4000 * apricot6) ^ (apricot6 / 128 | 0x2000000 * apricot6) ^ apricot6 / 8) + ((nectarine5 / 0x80000 | 0x2000 * nectarine5) ^ (nectarine5 / 0x20000 | 0x8000 * nectarine5) ^ nectarine5 / 1024); // 0x2a94
    uint32_t durian5 = ((legume5 / 0x80000 | 0x2000 * legume5) ^ (legume5 / 0x20000 | 0x8000 * legume5) ^ legume5 / 1024) + avocado5 + apricot6 + (tomato6 / 8 ^ (tomato6 / 128 | 0x2000000 * tomato6) ^ (tomato6 / 0x40000 | 0x4000 * tomato6)); // 0x2b02
    int32_t lychee5 = (abaca6 / 0x40000 | 0x4000 * abaca6) ^ (abaca6 / 128 | 0x2000000 * abaca6) ^ abaca6 / 8; // 0x2b62
    uint32_t achira5 = raspberry5 + tomato6 + lychee5 + ((jambul5 / 0x80000 | 0x2000 * jambul5) ^ (jambul5 / 0x20000 | 0x8000 * jambul5) ^ jambul5 / 1024); // 0x2b76
    int32_t damson5 = (peach6 / 0x40000 | 0x4000 * peach6) ^ (peach6 / 128 | 0x2000000 * peach6) ^ peach6 / 8; // 0x2c22
    uint32_t blackberry5 = legume5 + abaca6 + damson5 + tangerine5; // 0x2c4c
    uint32_t chickoo5 = jambul5 + lime5 + ((durian5 / 0x40000 | 0x4000 * durian5) ^ (durian5 / 128 | 0x2000000 * durian5) ^ durian5 / 8) + tampoi5; // 0x2cc6
    uint32_t jackfruit5 = ((blackberry5 / 0x80000 | 0x2000 * blackberry5) ^ (blackberry5 / 0x20000 | 0x8000 * blackberry5) ^ blackberry5 / 1024) + durian5 + nut5 + ((mango5 / 0x40000 | 0x4000 * mango5) ^ (mango5 / 128 | 0x2000000 * mango5) ^ mango5 / 8); // 0x2d36
    uint32_t luma5 = lychee5 + mango5 + achira5 + ((chickoo5 / 0x80000 | 0x2000 * chickoo5) ^ (chickoo5 / 0x20000 | 0x8000 * chickoo5) ^ chickoo5 / 1024); // 0x2dba
    uint32_t salal6 = abaca6 + salal + damson5 + ((jackfruit5 / 0x80000 | 0x2000 * jackfruit5) ^ (0x8000 * jackfruit5 | jackfruit5 / 0x20000) ^ jackfruit5 / 1024); // 0x2e2a
    uint32_t taro6 = avocado5 + peach6 + ((raspberry5 / 0x40000 | 0x4000 * raspberry5) ^ (raspberry5 / 128 | 0x2000000 * raspberry5) ^ raspberry5 / 8) + ((luma5 / 0x80000 | 0x2000 * luma5) ^ (luma5 / 0x20000 | 0x8000 * luma5) ^ luma5 / 1024); // 0x2ea2
    int32_t manis6 = avocado / 128 | 0x2000000 * avocado; // 0x2eaa
    int32_t rata6 = avocado / 0x40000 | 0x4000 * avocado; // 0x2eb0
    uint32_t tuna6 = avocado / 8; // 0x2eb4
    uint32_t yucca6 = ((salal6 / 0x80000 | 0x2000 * salal6) ^ (salal6 / 0x20000 | 0x8000 * salal6) ^ salal6 / 1024) + raspberry5 + papaya5 + (tuna6 ^ manis6 ^ rata6); // 0x2f14
    int32_t duku6 = blackberry5 + avocado; // 0x2f70
    uint32_t eddo6 = duku6 + ((raspberry / 0x40000 | 0x4000 * raspberry) ^ (raspberry / 128 | 0x2000000 * raspberry) ^ raspberry / 8) + ((taro6 / 0x80000 | 0x2000 * taro6) ^ (taro6 / 0x20000 | 0x8000 * taro6) ^ taro6 / 1024); // 0x2f84
    abaca = eddo6;
    int32_t fig6 = (yucca6 / 0x80000 | 0x2000 * yucca6) ^ (yucca6 / 0x20000 | 0x8000 * yucca6) ^ yucca6 / 1024; // 0x300a
    uint32_t apple7 = fig6 + chickoo5 + raspberry + ((legume5 / 0x40000 | 0x4000 * legume5) ^ (legume5 / 128 | 0x2000000 * legume5) ^ legume5 / 8); // 0x3010
    orange = apple7;
    uint32_t banana7 = jackfruit5 + legume5 + ((lime5 / 0x40000 | 0x4000 * lime5) ^ (lime5 / 128 | 0x2000000 * lime5) ^ lime5 / 8) + ((eddo6 / 0x80000 | 0x2000 * eddo6) ^ (eddo6 / 0x20000 | 0x8000 * eddo6) ^ eddo6 / 1024); // 0x3084
    tomato = banana7;
    uint32_t lemon7 = luma5 + lime5 + ((nut5 / 0x40000 | 0x4000 * nut5) ^ (nut5 / 128 | 0x2000000 * nut5) ^ nut5 / 8) + ((apple7 / 0x80000 | 0x2000 * apple7) ^ (apple7 / 0x20000 | 0x8000 * apple7) ^ apple7 / 1024); // 0x30e6
    uint32_t plum7 = salal6 + nut5 + ((achira5 / 0x40000 | 0x4000 * achira5) ^ (achira5 / 128 | 0x2000000 * achira5) ^ achira5 / 8) + ((banana7 / 0x80000 | 0x2000 * banana7) ^ (banana7 / 0x20000 | 0x8000 * banana7) ^ banana7 / 1024); // 0x3158
    uint32_t orange7 = taro6 + achira5 + ((salal / 0x40000 | 0x4000 * salal) ^ (salal / 128 | 0x2000000 * salal) ^ salal / 8) + ((lemon7 / 0x80000 | 0x2000 * lemon7) ^ (lemon7 / 0x20000 | 0x8000 * lemon7) ^ lemon7 / 1024); // 0x31da
    uint32_t melon7 = yucca6 + salal + ((avocado5 / 0x40000 | 0x4000 * avocado5) ^ (avocado5 / 128 | 0x2000000 * avocado5) ^ avocado5 / 8) + ((plum7 / 0x80000 | 0x2000 * plum7) ^ (plum7 / 0x20000 | 0x8000 * plum7) ^ plum7 / 1024); // 0x325c
    uint32_t pear7 = abaca + avocado5 + ((papaya5 / 0x40000 | 0x4000 * papaya5) ^ (papaya5 / 128 | 0x2000000 * papaya5) ^ papaya5 / 8) + (orange7 / 1024 ^ (orange7 / 0x20000 | 0x8000 * orange7) ^ (orange7 / 0x80000 | 0x2000 * orange7)); // 0x32d4
    uint32_t tea7 = orange + papaya5 + ((blackberry5 / 0x40000 | 0x4000 * blackberry5) ^ (blackberry5 / 128 | 0x2000000 * blackberry5) ^ blackberry5 / 8) + (melon7 / 1024 ^ (melon7 / 0x20000 | 0x8000 * melon7) ^ (melon7 / 0x80000 | 0x2000 * melon7)); // 0x3348
    int32_t cherry7 = (pear7 / 0x80000 | 0x2000 * pear7) ^ (pear7 / 0x20000 | 0x8000 * pear7) ^ pear7 / 1024; // 0x33d6
    uint32_t grape12 = ((yucca6 / 0x40000 | 0x4000 * yucca6) ^ (yucca6 / 128 | 0x2000000 * yucca6) ^ yucca6 / 8) + avocado5 + tomato + cherry7; // 0x33de
    cherry = cherry + *(int32_t *)0x3694 + grape12;
    uint32_t apricot7;
    int32_t tomato7 = yucca6 + taro6 + ((apricot7 / 0x40000 | 0x4000 * apricot7) ^ (apricot7 / 128 | 0x2000000 * apricot7) ^ apricot7 / 8); // 0x3434
    int32_t abaca7 = (tea7 / 0x80000 | 0x2000 * tea7) ^ (tea7 / 0x20000 | 0x8000 * tea7); // 0x343a
    uint32_t peach7 = (abaca7 ^ tea7 / 1024) + tomato7; // 0x3446
    apple = *(int32_t *)0x3698 + apple + peach7;
    int32_t papaya6 = (grape12 / 0x80000 | 0x2000 * grape12) ^ (grape12 / 0x20000 | 0x8000 * grape12) ^ grape12 / 1024; // 0x34ae
    int32_t grape13 = *(int32_t *)0x369c; // 0x34b2
    banana = grape13 + banana + papaya6 + papaya5 + apricot7 + (rata6 ^ manis6 ^ tuna6);
    uint32_t tampoi6 = ((peach7 / 0x80000 | 0x2000 * peach7) ^ (peach7 / 0x20000 | 0x8000 * peach7) ^ peach7 / 1024) + duku6 + ((jackfruit5 / 0x40000 | 0x4000 * jackfruit5) ^ (jackfruit5 / 128 | 0x2000000 * jackfruit5) ^ jackfruit5 / 8); // 0x3524
    int32_t lime6 = (tampoi6 / 0x80000 | 0x2000 * tampoi6) ^ (tampoi6 / 0x20000 | 0x8000 * tampoi6) ^ tampoi6 / 1024; // 0x360a
    orange = lime6;
    *(int32_t *)(tangerine + 8) = lime6;
    tomato = tangerine;
    *(int32_t *)(tangerine + 12) = tea;
    *(int32_t *)(tomato + 16) = pear;
    pear = tangerine;
    *(int32_t *)(tangerine + 24) = apple;
    *(int32_t *)(pear + 20) = banana;
    apple = raisin5;
    banana = lulita5;
    *(int32_t *)(pear + 28) = cherry;
    *(int32_t *)(pear + 32) = grape;
    *(int32_t *)(pear + 36) = apricot;
    cherry = melon;
    int32_t nut6;
    grape = nut6;
    int32_t mango6;
    apricot = mango6;
    abaca = tuna;
    peach = yucca;
    lemon = duku;
    plum = eddo;
    pear = (int32_t)*(int8_t *)(mango6 + 3);
    *(int32_t *)mango6 = apple;
    *(int32_t *)(mango6 + 4) = cherry;
    *(int32_t *)(mango6 + 8) = grape;
    *(int32_t *)(mango6 + 12) = apricot;
    apricot = mango6 + 16;
    *(int16_t *)(banana + 38) = (int16_t)apple;
    int32_t avocado6 = 256 * banana; // 0x3698
    apple = avocado6;
    tomato = (int32_t)*(int16_t *)(avocado6 | 38);
    cherry = 0x37e4;
    tea = 0x3a84;
}

void sha2_update(void) {
    // bb
    grape = pear;
    cherry = apple;
    tomato = banana;
    int32_t * raspberry = (int32_t *)apple; // bp+746
    uint32_t tangerine = *raspberry; // 0x36b4
    apricot = tangerine % 64;
    int32_t lulita = tangerine + pear; // 0x36ba
    *raspberry = lulita;
    if (lulita >= pear) {
        int32_t * raisin = (int32_t *)(apple + 4); // bp+752
        int32_t nectarine = *raisin + 1; // 0x36c4
        tea = nectarine;
        *raisin = nectarine;
        // branch -> 0x36c8
    }
    int32_t legume = 64 - apricot; // 0x36ca
    abaca = legume;
    banana = tomato;
    pear = legume;
    apple = apricot + 40 + cherry;
}

void sha2_finish(void) {
    // bb
    grape = banana;
    int32_t jambul = apple; // 0x371e
    uint32_t durian = *(int32_t *)jambul; // 0x371e
    cherry = jambul;
    tea = 8 * durian;
    pear = durian % 64 | 64;
    apple = jambul;
    banana = *(int32_t *)0x3814;
}

void sha2(void) {
    // bb
    grape = banana;
    apricot = apple;
    cherry = pear;
}

void spi_close(void) {
    // bb
    banana = 0x20000;
    pear = (int32_t)Prnt;
    apple = *(int32_t *)0x3874;
}

void spi_tranfer(void) {
    // bb
    plum = banana;
    apricot = pear;
    peach = tea;
    int32_t lychee;
    abaca = lychee;
    int32_t achira = *(int32_t *)0x3a00; // 0x388e
    grape = achira;
    if (*(int32_t *)(achira + 24) != 0) {
        // 0x3896
        melon = 0x3899;
        // branch -> 0x3898
    }
    int32_t damson = *(int32_t *)0x3a04; // 0x3898
    cherry = damson;
    *(int32_t *)(*(int32_t *)damson + 308) = 1;
    if (*(int32_t *)(grape + 24) != 0) {
        // 0x38aa
        melon = 0x38ad;
        // branch -> 0x38ac
    }
    int32_t * blackberry = (int32_t *)cherry; // bp+772
    *(int32_t *)(*blackberry + 300) = *(int32_t *)(*blackberry + 300) | 0x100000;
    if (*(int32_t *)(*(int32_t *)0x3a00 + 24) != 0) {
        // 0x38d4
        melon = 0x38d7;
        // branch -> 0x38d6
    }
    int32_t chickoo = *(int32_t *)0x3a04; // 0x38d6
    grape = chickoo;
    *(int32_t *)(*(int32_t *)chickoo + 280) = (int32_t)function_4;
    tomato = (int32_t)Prnt;
    int32_t jackfruit = *(int32_t *)0x3a00; // 0x38e2
    lemon = jackfruit;
    cherry = (int32_t)Prnt;
    tea = (int32_t)Prnt & 0xffff;
    if (apricot > ((int32_t)Prnt & 0xffff)) {
        // 0x395a
        pear = (int32_t)Prnt;
        function_39a2(apple, *(int32_t *)0x3a04);
        return;
    }
    int32_t luma = (int32_t)Prnt; // 0x38f6
    while (true) {
        // 0x38ea
        if (*(int32_t *)(jackfruit + 24) != 0) {
            // 0x38f4
            melon = 0x38f7;
            // branch -> 0x38f6
        }
        int32_t salal = (int32_t)*(int8_t *)(plum + luma); // 0x38f6
        *(int32_t *)(*(int32_t *)grape + 312) = salal;
        int32_t taro = 0x20000000 * *(int32_t *)(*(int32_t *)grape + 280); // 0x390a
        apple = taro;
        if (taro < 0) {
            int32_t manis = grape; // 0x3910
            while (true) {
                int32_t * rata = (int32_t *)manis; // bp+797
                int32_t tuna = manis; // 0x394a
                if (0x4000000 * *(int32_t *)(*rata + 304) > 0) {
                    // 0x3910
                    *(int8_t *)(peach + cherry) = (int8_t)*(int32_t *)(*rata + 316);
                    cherry = (cherry + 1) % 0x10000;
                    if (0x10000000 * *(int32_t *)(*(int32_t *)grape + 304) < 0) {
                        tuna = grape;
                        // break -> 0x393e
                        break;
                    }
                    manis = grape;
                    // continue -> 0x3930
                    continue;
                }
                // 0x393e
                if (*(int32_t *)(lemon + 24) != 0) {
                    // 0x3948
                  lab_0x25a19f0:
                    melon = 0x394b;
                    // branch -> 0x394a
                }
                // 0x394a
              lab_0x25a2a10:
                *(int32_t *)(*(int32_t *)tuna + 280) = (int32_t)function_4;
                // branch -> 0x3952
            }
            // 0x393e
            if (*(int32_t *)(lemon + 24) == 0) {
                goto lab_0x25a2a10;
            }
            goto lab_0x25a19f0;
        }
        int32_t yucca = tomato + 1; // 0x3952
        tomato = yucca;
        if (yucca % 0x10000 < apricot) {
            // 0x395a
            pear = (int32_t)Prnt;
            function_39a2(apple, *(int32_t *)0x3a04);
            return;
        }
        // 0x3952
        jackfruit = lemon;
        luma = yucca;
        // branch -> 0x38ea
    }
}

void spi_init(void) {
    // bb
    banana = (int32_t)Prnt;
    pear = 272;
}

void rev(void) {
    int32_t duku = banana; // 0x3d6e
    int32_t eddo = duku - 1; // 0x3d6e
    banana = eddo;
    tea = (int32_t)Prnt;
    if ((int32_t)Prnt - 1 - duku <= (int32_t)Prnt) {
        // 0x3d84
        return;
    }
    int8_t * fig = (int8_t *)(apple + (int32_t)Prnt); // bp+822
    pear = (int32_t)*fig;
    *fig = *(int8_t *)(apple + eddo);
    tea += 1;
    *(int8_t *)(apple + banana) = (int8_t)pear;
    int32_t apple2 = banana; // 0x3d7e
    int32_t banana2 = apple2 - 1; // 0x3d7e
    banana = banana2;
    int32_t lemon2 = tea; // 0x3d80
    while (-1 - apple2 + lemon2 > lemon2) {
        // 0x3d74
        fig = (int8_t *)(apple + lemon2);
        pear = (int32_t)*fig;
        *fig = *(int8_t *)(apple + banana2);
        tea += 1;
        *(int8_t *)(apple + banana) = (int8_t)pear;
        apple2 = banana;
        banana2 = apple2 - 1;
        banana = banana2;
        lemon2 = tea;
        // continue -> 0x3d74
    }
}

void CRC5(void) {
    // bb
    tea = 1;
    pear = (int32_t)Prnt;
    orange = 1;
    if (banana == -1) {
        // 0x3e14
        apple = 15;
        return;
    }
    while (true) {
        // 0x3d9c
        // branch -> 0x3d9c
    }
}

void bitmain_asic_inactive(void) {
    // bb
    cherry = apple;
    banana = (int32_t)function_4;
}

void bitmain_asic_set_addr(void) {
    // bb
    cherry = apple;
    banana = (int32_t)function_4;
    grape = pear;
}

void bitmain_asic_set_frequency(void) {
    // bb
    cherry = apple;
    grape = banana;
    banana = (int32_t)function_4;
    apricot = pear;
}

void parse_return_nonce(void) {
    // bb
    grape = apple;
    tea = (int32_t)*(int8_t *)banana;
    apricot = banana;
    peach = pear;
    cherry = banana + 12;
    apple = *(int32_t *)0x411c;
    abaca = -1;
}

void nonce_query(void) {
    int32_t plum2 = *(int32_t *)0x42c4; // 0x4240
    cherry = plum2;
    grape = apple;
    *(int8_t *)(plum2 + 1844) = 2;
    *(int8_t *)(cherry + 1845) = 85;
    *(int8_t *)(cherry + 1846) = -86;
    *(int8_t *)(cherry + 1847) = 51;
    uint16_t orange2 = *(int16_t *)(apple + 804); // 0x425a
    int32_t melon2 = 256 * (int32_t)orange2 & 0xff00 | (int32_t)(orange2 / 256); // 0x425e
    *(int16_t *)(cherry + 1848) = (int16_t)melon2;
    uint16_t pear2 = *(int16_t *)(apple + 808); // 0x4264
    int32_t tea2 = 256 * (int32_t)pear2 & 0xff00 | (int32_t)(pear2 / 256); // 0x4268
    *(int16_t *)(cherry + 1850) = (int16_t)tea2;
    int32_t cherry2 = (int32_t)*(int8_t *)(apple + 871); // 0x4274
    tea = cherry2;
    apple = *(int32_t *)0x42c8;
    int32_t grape2 = 1000 * cherry2 - 1; // 0x4280
    banana = grape2;
    apricot = grape2 | -0x80000000;
}

void send_work_to_fpga(void) {
    // bb
    apricot = banana;
    grape = pear;
    apple = *(int32_t *)0x4374;
    tea = 17;
}

void send_BC_to_fpga(void) {
    // bb
    cherry = banana;
    grape = apple;
    banana = 8;
    tea = (int32_t)function_34;
}

void set_frequency(void) {
    // bb
    apricot = banana;
    pear = *(int32_t *)0x4448;
    banana = *(int32_t *)0x444c;
    lemon = apple;
    peach = 130;
    cherry = (int32_t)Prnt;
}

void bitmain_asic_get_status(void) {
    // 0x4468
    grape = banana;
    tomato = pear;
    abaca = tea;
    uint8_t apricot2;
    apricot = apricot2;
    cherry = apple;
    banana = (int32_t)function_4;
}

void clear_fpga_nonce_buffer(void) {
    // bb
    cherry = apple;
    grape = 102;
    apple = *(int32_t *)0x4500;
}

void sort_array(void) {
    // bb
    tea = 1;
    if (banana > 1) {
        // 0x4542
        return;
    }
    int32_t tomato2 = apple; // 0x4518
    int32_t abaca2 = 1; // 0x451c
    while (true) {
        int32_t peach2 = tomato2 + 1; // 0x4518
        uint8_t papaya = *(int8_t *)peach2; // 0x4518
        int32_t grape2 = papaya; // 0x4518
        int32_t tampoi = grape2;
        int32_t lime = abaca2 - 1; // 0x451c
        uint8_t nut = *(int8_t *)tomato2; // 0x452a4
        int32_t mango = nut; // 0x452a5
        int32_t avocado = tomato2;
        int32_t raspberry = grape2; // 0x453c
        int32_t tangerine = abaca2; // 0x4534
        if (-2 - grape2 + mango <= mango && nut != papaya) {
            pear = lime - 1;
            *(int8_t *)(tomato2 + 1) = (int8_t)mango;
            int32_t lulita = avocado - 1; // 0x452a
            int32_t raisin = (int32_t)*(int8_t *)lulita; // 0x452a
            int32_t nectarine = pear;
            while (-2 - tampoi + raisin <= raisin && raisin != tampoi) {
                // 0x4524
                pear = nectarine - 1;
                *(int8_t *)(lulita + 1) = (int8_t)raisin;
                lulita -= 1;
                raisin = (int32_t)*(int8_t *)lulita;
                nectarine = pear;
                // continue -> 0x4524
            }
            // 0x452a
            raspberry = tampoi;
            tangerine = tea;
            lime = nectarine;
            // branch -> 0x4532
        }
        // 0x4532
        tea = tangerine + 1;
        *(int8_t *)(apple + lime + 1) = (int8_t)raspberry;
        int32_t legume = tea; // 0x453e
        if (legume < banana) {
            // 0x4542
            return;
        }
        // 0x4532
        tomato2 = peach2;
        abaca2 = legume;
        // branch -> 0x4518
    }
}

void detect_chain_num(void) {
    // bb
    cherry = apple;
    banana = (int32_t)Prnt;
    pear = (int32_t)function_10;
}

void function_4(void) {
    // bb
    pear = *(int32_t *)120;
    tea = *(int32_t *)tea + 512;
}

void function_760(void) {
    // bb
    // branch -> 0x760
    while (true) {
        // 0x760
        // branch -> 0x760
    }
}

void function_a(void) {
    // bb
    apple = *(int32_t *)160;
}

void function_c(void) {
    // bb
    *(int32_t *)pear = tea;
}

void function_10(void) {
    // bb
    // branch -> 0x10
    while (true) {
        // 0x10
        // branch -> 0x10
    }
}

// Warning: There were some errors during the decompilation of the following
//          function. Therefore, its body may be incomplete.
void function_22(void) {
    // bb
    return;
}

void function_28(void) {
    // bb
    banana = *(int32_t *)132;
    apple = *(int32_t *)(cherry + 120);
}

void function_2c(void) {
    // bb
    // branch -> 0x2c
    while (true) {
        // 0x2c
        // branch -> 0x2c
    }
}

void function_2e(void) {
    // bb
    pear = (int32_t)function_c;
    apple = grape;
}

void function_32(void) {
    // bb
    apple = *(int32_t *)136;
}

void function_34(void) {
    // bb
    // branch -> 0x34
    while (true) {
        // 0x34
        // branch -> 0x34
    }
}

void function_3c(void) {
    // bb
    // branch -> 0x3c
    while (true) {
        // 0x3c
        // branch -> 0x3c
    }
}

void function_40(void) {
    // bb
    grape = *(int32_t *)tea;
    apple = 512 * *(int32_t *)(cherry + 820);
}

void function_48(void) {
    // bb
    // branch -> 0x48
    while (true) {
        // 0x48
        // branch -> 0x48
    }
}

void function_50(void) {
    // bb
    // branch -> 0x50
    while (true) {
        // 0x50
        // branch -> 0x50
    }
}

void function_56(void) {
    // bb
    // branch -> 0x56
    while (true) {
        // 0x56
        // branch -> 0x56
    }
}

void function_58(int32_t a) {
    // bb
    // branch -> 0x58
    while (true) {
        // 0x58
        // branch -> 0x58
    }
}

// Warning: There were some errors during the decompilation of the following
//          function. Therefore, its body may be incomplete.
void function_60(void) {
    // bb
    return;
}

void function_6c(int32_t jambul, int32_t durian, int32_t lychee) {
    // bb
    apple = jambul;
    banana = durian;
    pear = lychee;
    *(int32_t *)(*(int32_t *)tea + 400) = lychee;
    int32_t achira;
    tea = achira;
    int32_t damson;
    cherry = damson;
    int32_t blackberry;
    grape = blackberry;
}

void function_7e(void) {
    // 0x88
    cherry = 2 * tomato;
}

void function_92(void) {
    // bb
    cherry = pear;
    banana = function_408();
}

void function_b8(void) {
    // bb
    // branch -> 0xb8
    while (true) {
        // 0xb8
        // branch -> 0xb8
    }
}

void function_15a(void) {
    // bb
    // branch -> 0x15a
    while (true) {
        // 0x15a
        // branch -> 0x15a
    }
}

void function_16a(void) {
    // bb
    // branch -> 0x16a
    while (true) {
        // 0x16a
        // branch -> 0x16a
    }
}

void function_26c(void) {
    // bb
    // branch -> 0x26c
    while (true) {
        // 0x26c
        // branch -> 0x26c
    }
}

void function_2b0(void) {
    // bb
    // branch -> 0x2b0
    while (true) {
        // 0x2b0
        // branch -> 0x2b0
    }
}

void function_2b8(void) {
    // bb
    // branch -> 0x2b8
    while (true) {
        // 0x2b8
        // branch -> 0x2b8
    }
}

void function_2c2(int32_t a, int32_t b) {
    // bb
    // branch -> 0x2c2
    while (true) {
        // 0x2c2
        // branch -> 0x2c2
    }
}

void function_2e4(void) {
    // bb
    // branch -> 0x2e4
    while (true) {
        // 0x2e4
        // branch -> 0x2e4
    }
}

void function_2fa(void) {
    // bb
    // branch -> 0x2fa
    while (true) {
        // 0x2fa
        // branch -> 0x2fa
    }
}

void function_3bc(void) {
    // bb
    // branch -> 0x3bc
    while (true) {
        // 0x3bc
        // branch -> 0x3bc
    }
}

void function_402(void) {
    // bb
    // branch -> 0x402
    while (true) {
        // 0x402
        // branch -> 0x402
    }
}

void function_410(void) {
    // bb
    // branch -> 0x410
    while (true) {
        // 0x410
        // branch -> 0x410
    }
}

void function_488(void) {
    // bb
    // branch -> 0x488
    while (true) {
        // 0x488
        // branch -> 0x488
    }
}

void function_4a6(void) {
    // bb
    // branch -> 0x4a6
    while (true) {
        // 0x4a6
        // branch -> 0x4a6
    }
}

void function_4c6(void) {
    // bb
    // branch -> 0x4c6
    while (true) {
        // 0x4c6
        // branch -> 0x4c6
    }
}

void function_4e0(void) {
    // bb
    // branch -> 0x4e0
    while (true) {
        // 0x4e0
        // branch -> 0x4e0
    }
}

void function_508(void) {
    // bb
    // branch -> 0x508
    while (true) {
        // 0x508
        // branch -> 0x508
    }
}

void function_546(void) {
    // bb
    // branch -> 0x546
    while (true) {
        // 0x546
        // branch -> 0x546
    }
}

void function_54e(void) {
    // bb
    // branch -> 0x54e
    while (true) {
        // 0x54e
        // branch -> 0x54e
    }
}

void function_710(int32_t chickoo, int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro) {
    // bb
    // branch -> 0x710
    while (true) {
        // 0x710
        // branch -> 0x710
    }
}

void function_74c(void) {
    // bb
    // branch -> 0x74c
    while (true) {
        // 0x74c
        // branch -> 0x74c
    }
}

void function_754(void) {
    // bb
    // branch -> 0x754
    while (true) {
        // 0x754
        // branch -> 0x754
    }
}

void function_13f4(void) {
    // bb
    // branch -> 0x13f4
    while (true) {
        // 0x13f4
        // branch -> 0x13f4
    }
}

void function_766(int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo) {
    // bb
    // branch -> 0x766
    while (true) {
        // 0x766
        // branch -> 0x766
    }
}

void function_83c(int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2) {
    // bb
    // branch -> 0x83c
    while (true) {
        // 0x83c
        // branch -> 0x83c
    }
}

void function_88a(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x88a
    while (true) {
        // 0x88a
        // branch -> 0x88a
    }
}

void function_930(int32_t a) {
    // bb
    // branch -> 0x930
    while (true) {
        // 0x930
        // branch -> 0x930
    }
}

void function_958(void) {
    // bb
    // branch -> 0x958
    while (true) {
        // 0x958
        // branch -> 0x958
    }
}

void function_970(void) {
    // bb
    // branch -> 0x970
    while (true) {
        // 0x970
        // branch -> 0x970
    }
}

void function_97c(void) {
    // bb
    // branch -> 0x97c
    while (true) {
        // 0x97c
        // branch -> 0x97c
    }
}

void function_988(void) {
    // bb
    // branch -> 0x988
    while (true) {
        // 0x988
        // branch -> 0x988
    }
}

void function_992(void) {
    // bb
    // branch -> 0x992
    while (true) {
        // 0x992
        // branch -> 0x992
    }
}

void function_99e(void) {
    // bb
    // branch -> 0x99e
    while (true) {
        // 0x99e
        // branch -> 0x99e
    }
}

void function_9a4(void) {
    // bb
    // branch -> 0x9a4
    while (true) {
        // 0x9a4
        // branch -> 0x9a4
    }
}

void function_a3e(void) {
    // bb
    // branch -> 0xa3e
    while (true) {
        // 0xa3e
        // branch -> 0xa3e
    }
}

void function_a54(void) {
    // bb
    // branch -> 0xa54
    while (true) {
        // 0xa54
        // branch -> 0xa54
    }
}

void function_a64(void) {
    // bb
    // branch -> 0xa64
    while (true) {
        // 0xa64
        // branch -> 0xa64
    }
}

int32_t function_a6c(int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2, int32_t cherry2, int32_t grape2) {
    // bb
    // branch -> 0xa6c
    while (true) {
        // 0xa6c
        // branch -> 0xa6c
    }
}

void function_aac(void) {
    // bb
    // branch -> 0xaac
    while (true) {
        // 0xaac
        // branch -> 0xaac
    }
}

void function_aba(void) {
    // bb
    // branch -> 0xaba
    while (true) {
        // 0xaba
        // branch -> 0xaba
    }
}

void function_ac2(int32_t a, int32_t b) {
    // bb
    // branch -> 0xac2
    while (true) {
        // 0xac2
        // branch -> 0xac2
    }
}

void function_b24(void) {
    // bb
    // branch -> 0xb24
    while (true) {
        // 0xb24
        // branch -> 0xb24
    }
}

void function_b38(int32_t a) {
    // bb
    // branch -> 0xb38
    while (true) {
        // 0xb38
        // branch -> 0xb38
    }
}

void function_b46(void) {
    // bb
    // branch -> 0xb46
    while (true) {
        // 0xb46
        // branch -> 0xb46
    }
}

void function_b8e(void) {
    // bb
    // branch -> 0xb8e
    while (true) {
        // 0xb8e
        // branch -> 0xb8e
    }
}

void function_ba8(void) {
    // bb
    // branch -> 0xba8
    while (true) {
        // 0xba8
        // branch -> 0xba8
    }
}

void function_bc4(void) {
    // bb
    // branch -> 0xbc4
    while (true) {
        // 0xbc4
        // branch -> 0xbc4
    }
}

void function_be6(int32_t a) {
    // bb
    // branch -> 0xbe6
    while (true) {
        // 0xbe6
        // branch -> 0xbe6
    }
}

void function_c10(void) {
    // bb
    // branch -> 0xc10
    while (true) {
        // 0xc10
        // branch -> 0xc10
    }
}

void function_c5c(int32_t a, int32_t b) {
    // bb
    // branch -> 0xc5c
    while (true) {
        // 0xc5c
        // branch -> 0xc5c
    }
}

void function_c76(int32_t a, int32_t b) {
    // bb
    // branch -> 0xc76
    while (true) {
        // 0xc76
        // branch -> 0xc76
    }
}

void function_c8c(void) {
    // bb
    // branch -> 0xc8c
    while (true) {
        // 0xc8c
        // branch -> 0xc8c
    }
}

void function_c98(void) {
    // bb
    // branch -> 0xc98
    while (true) {
        // 0xc98
        // branch -> 0xc98
    }
}

void function_cb2(void) {
    // bb
    // branch -> 0xcb2
    while (true) {
        // 0xcb2
        // branch -> 0xcb2
    }
}

void function_cb8(void) {
    // bb
    // branch -> 0xcb8
    while (true) {
        // 0xcb8
        // branch -> 0xcb8
    }
}

void function_cc4(void) {
    // bb
    // branch -> 0xcc4
    while (true) {
        // 0xcc4
        // branch -> 0xcc4
    }
}

void function_cdc(int32_t a, int32_t b) {
    // bb
    // branch -> 0xcdc
    while (true) {
        // 0xcdc
        // branch -> 0xcdc
    }
}

void function_cf2(int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape2) {
    // bb
    // branch -> 0xcf2
    while (true) {
        // 0xcf2
        // branch -> 0xcf2
    }
}

void function_d2a(int32_t a) {
    // bb
    // branch -> 0xd2a
    while (true) {
        // 0xd2a
        // branch -> 0xd2a
    }
}

void function_d3a(int32_t a) {
    // bb
    // branch -> 0xd3a
    while (true) {
        // 0xd3a
        // branch -> 0xd3a
    }
}

void function_d4c(void) {
    // bb
    // branch -> 0xd4c
    while (true) {
        // 0xd4c
        // branch -> 0xd4c
    }
}

void function_d64(void) {
    // bb
    // branch -> 0xd64
    while (true) {
        // 0xd64
        // branch -> 0xd64
    }
}

void function_d6a(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0xd6a
    while (true) {
        // 0xd6a
        // branch -> 0xd6a
    }
}

void function_d90(void) {
    // bb
    // branch -> 0xd90
    while (true) {
        // 0xd90
        // branch -> 0xd90
    }
}

void function_e5c(void) {
    // bb
    // branch -> 0xe5c
    while (true) {
        // 0xe5c
        // branch -> 0xe5c
    }
}

void function_e66(void) {
    // bb
    // branch -> 0xe66
    while (true) {
        // 0xe66
        // branch -> 0xe66
    }
}

void function_e72(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0xe72
    while (true) {
        // 0xe72
        // branch -> 0xe72
    }
}

void function_ed4(void) {
    // bb
    // branch -> 0xed4
    while (true) {
        // 0xed4
        // branch -> 0xed4
    }
}

void function_edc(void) {
    // bb
    // branch -> 0xedc
    while (true) {
        // 0xedc
        // branch -> 0xedc
    }
}

void function_ee6(int32_t a, int32_t b) {
    // bb
    // branch -> 0xee6
    while (true) {
        // 0xee6
        // branch -> 0xee6
    }
}

void function_f2a(int32_t tampoi, int32_t lime, int32_t nut, int32_t mango, int32_t avocado) {
    // bb
    // branch -> 0xf2a
    while (true) {
        // 0xf2a
        // branch -> 0xf2a
    }
}

void function_fc2(void) {
    // bb
    // branch -> 0xfc2
    while (true) {
        // 0xfc2
        // branch -> 0xfc2
    }
}

void function_1002(void) {
    // bb
    // branch -> 0x1002
    while (true) {
        // 0x1002
        // branch -> 0x1002
    }
}

void function_108e(void) {
    // bb
    // branch -> 0x108e
    while (true) {
        // 0x108e
        // branch -> 0x108e
    }
}

void function_10a8(void) {
    // bb
    // branch -> 0x10a8
    while (true) {
        // 0x10a8
        // branch -> 0x10a8
    }
}

void function_10be(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x10be
    while (true) {
        // 0x10be
        // branch -> 0x10be
    }
}

void function_10d4(void) {
    // bb
    // branch -> 0x10d4
    while (true) {
        // 0x10d4
        // branch -> 0x10d4
    }
}

void function_10da(void) {
    // bb
    // branch -> 0x10da
    while (true) {
        // 0x10da
        // branch -> 0x10da
    }
}

void function_10e0(void) {
    // bb
    // branch -> 0x10e0
    while (true) {
        // 0x10e0
        // branch -> 0x10e0
    }
}

void function_10e8(void) {
    // bb
    // branch -> 0x10e8
    while (true) {
        // 0x10e8
        // branch -> 0x10e8
    }
}

void function_10ee(void) {
    // bb
    // branch -> 0x10ee
    while (true) {
        // 0x10ee
        // branch -> 0x10ee
    }
}

void function_10f6(void) {
    // bb
    // branch -> 0x10f6
    while (true) {
        // 0x10f6
        // branch -> 0x10f6
    }
}

void function_10fe(void) {
    // bb
    // branch -> 0x10fe
    while (true) {
        // 0x10fe
        // branch -> 0x10fe
    }
}

void function_1102(void) {
    // bb
    // branch -> 0x1102
    while (true) {
        // 0x1102
        // branch -> 0x1102
    }
}

void function_1108(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x1108
    while (true) {
        // 0x1108
        // branch -> 0x1108
    }
}

void function_118c(void) {
    // bb
    // branch -> 0x118c
    while (true) {
        // 0x118c
        // branch -> 0x118c
    }
}

void function_11ba(void) {
    // bb
    // branch -> 0x11ba
    while (true) {
        // 0x11ba
        // branch -> 0x11ba
    }
}

void function_11cc(void) {
    // bb
    // branch -> 0x11cc
    while (true) {
        // 0x11cc
        // branch -> 0x11cc
    }
}

void function_11d4(int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine, int32_t legume, int32_t jambul) {
    // bb
    // branch -> 0x11d4
    while (true) {
        // 0x11d4
        // branch -> 0x11d4
    }
}

void function_1200(void) {
    // bb
    // branch -> 0x1200
    while (true) {
        // 0x1200
        // branch -> 0x1200
    }
}

void function_1218(void) {
    // bb
    // branch -> 0x1218
    while (true) {
        // 0x1218
        // branch -> 0x1218
    }
}

void function_1224(void) {
    // bb
    // branch -> 0x1224
    while (true) {
        // 0x1224
        // branch -> 0x1224
    }
}

void function_1250(void) {
    // bb
    // branch -> 0x1250
    while (true) {
        // 0x1250
        // branch -> 0x1250
    }
}

void function_125c(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x125c
    while (true) {
        // 0x125c
        // branch -> 0x125c
    }
}

void function_12cc(void) {
    // bb
    // branch -> 0x12cc
    while (true) {
        // 0x12cc
        // branch -> 0x12cc
    }
}

void function_12e6(void) {
    // bb
    // branch -> 0x12e6
    while (true) {
        // 0x12e6
        // branch -> 0x12e6
    }
}

void function_12f2(void) {
    // bb
    // branch -> 0x12f2
    while (true) {
        // 0x12f2
        // branch -> 0x12f2
    }
}

void function_1320(void) {
    // bb
    // branch -> 0x1320
    while (true) {
        // 0x1320
        // branch -> 0x1320
    }
}

void function_132c(void) {
    // bb
    // branch -> 0x132c
    while (true) {
        // 0x132c
        // branch -> 0x132c
    }
}

void function_1380(void) {
    // bb
    // branch -> 0x1380
    while (true) {
        // 0x1380
        // branch -> 0x1380
    }
}

void function_13bc(void) {
    // bb
    // branch -> 0x13bc
    while (true) {
        // 0x13bc
        // branch -> 0x13bc
    }
}

void function_13ca(void) {
    // bb
    // branch -> 0x13ca
    while (true) {
        // 0x13ca
        // branch -> 0x13ca
    }
}

void function_13d6(void) {
    // bb
    // branch -> 0x13d6
    while (true) {
        // 0x13d6
        // branch -> 0x13d6
    }
}

void function_13e0(void) {
    // bb
    // branch -> 0x13e0
    while (true) {
        // 0x13e0
        // branch -> 0x13e0
    }
}

int32_t function_47bc(int32_t a) {
    int32_t x = grape + 1; // 0x47bc
    grape = x;
    int32_t y;
    apple = y + 32;
    return x;
}

void function_47ca(int32_t a) {
    // 0x47ca
    tea = (int32_t)Prnt;
    pear = (int32_t)Prnt;
    int32_t x;
    apple = function_4588(a, x);
}

void function_141c(void) {
    // bb
    // branch -> 0x141c
    while (true) {
        // 0x141c
        // branch -> 0x141c
    }
}

void function_1434(void) {
    // bb
    // branch -> 0x1434
    while (true) {
        // 0x1434
        // branch -> 0x1434
    }
}

void function_143a(int32_t durian, int32_t lychee, int32_t achira, int32_t damson, int32_t blackberry) {
    // bb
    // branch -> 0x143a
    while (true) {
        // 0x143a
        // branch -> 0x143a
    }
}

int32_t function_1564(void) {
    // 0x1564
    if (*(int32_t *)(*(int32_t *)0x1804 + 24) != 0) {
        // 0x156e
        melon = 0x1571;
        // branch -> 0x1570
    }
    // 0x1570
    grape = cherry - 116;
    pear = 0x200000;
    int32_t chickoo = *(int32_t *)*(int32_t *)0x1808; // 0x157a
    tea = chickoo;
    *(int32_t *)(chickoo + 404) = 0x200000;
    apple = grape;
    return grape;
}

void function_1582(void) {
    // bb
    // branch -> 0x1582
    while (true) {
        // 0x1582
        // branch -> 0x1582
    }
}

void function_1594(void) {
    // bb
    // branch -> 0x1594
    while (true) {
        // 0x1594
        // branch -> 0x1594
    }
}

void function_15d2(void) {
    // bb
    // branch -> 0x15d2
    while (true) {
        // 0x15d2
        // branch -> 0x15d2
    }
}

void function_15fe(void) {
    // bb
    // branch -> 0x15fe
    while (true) {
        // 0x15fe
        // branch -> 0x15fe
    }
}

void function_1638(void) {
    // bb
    // branch -> 0x1638
    while (true) {
        // 0x1638
        // branch -> 0x1638
    }
}

void function_1658(void) {
    // bb
    // branch -> 0x1658
    while (true) {
        // 0x1658
        // branch -> 0x1658
    }
}

void function_1660(void) {
    // bb
    // branch -> 0x1660
    while (true) {
        // 0x1660
        // branch -> 0x1660
    }
}

void function_169e(void) {
    // bb
    // branch -> 0x169e
    while (true) {
        // 0x169e
        // branch -> 0x169e
    }
}

void function_1772(void) {
    // bb
    // branch -> 0x1772
    while (true) {
        // 0x1772
        // branch -> 0x1772
    }
}

void function_1786(void) {
    // bb
    // branch -> 0x1786
    while (true) {
        // 0x1786
        // branch -> 0x1786
    }
}

void function_178c(void) {
    // bb
    // branch -> 0x178c
    while (true) {
        // 0x178c
        // branch -> 0x178c
    }
}

void function_17aa(void) {
    // bb
    // branch -> 0x17aa
    while (true) {
        // 0x17aa
        // branch -> 0x17aa
    }
}

void function_17b8(void) {
    // bb
    // branch -> 0x17b8
    while (true) {
        // 0x17b8
        // branch -> 0x17b8
    }
}

void function_17c6(void) {
    // bb
    // branch -> 0x17c6
    while (true) {
        // 0x17c6
        // branch -> 0x17c6
    }
}

void function_17d4(void) {
    // bb
    // branch -> 0x17d4
    while (true) {
        // 0x17d4
        // branch -> 0x17d4
    }
}

void function_17e4(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku) {
    // bb
    // branch -> 0x17e4
    while (true) {
        // 0x17e4
        // branch -> 0x17e4
    }
}

void function_36dc(void) {
    // bb
    // branch -> 0x36dc
    while (true) {
        // 0x36dc
        // branch -> 0x36dc
    }
}

void function_36e8(void) {
    // bb
    // branch -> 0x36e8
    while (true) {
        // 0x36e8
        // branch -> 0x36e8
    }
}

void function_36fa(void) {
    // bb
    // branch -> 0x36fa
    while (true) {
        // 0x36fa
        // branch -> 0x36fa
    }
}

void function_3712(int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2) {
    // bb
    // branch -> 0x3712
    while (true) {
        // 0x3712
        // branch -> 0x3712
    }
}

void function_376e(void) {
    // bb
    // branch -> 0x376e
    while (true) {
        // 0x376e
        // branch -> 0x376e
    }
}

void function_3778(int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2, int32_t tea2) {
    // bb
    // branch -> 0x3778
    while (true) {
        // 0x3778
        // branch -> 0x3778
    }
}

void function_3824(void) {
    // bb
    // branch -> 0x3824
    while (true) {
        // 0x3824
        // branch -> 0x3824
    }
}

void function_382e(void) {
    // bb
    // branch -> 0x382e
    while (true) {
        // 0x382e
        // branch -> 0x382e
    }
}

void function_3836(void) {
    // bb
    // branch -> 0x3836
    while (true) {
        // 0x3836
        // branch -> 0x3836
    }
}

void function_383e(int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2) {
    // bb
    // branch -> 0x383e
    while (true) {
        // 0x383e
        // branch -> 0x383e
    }
}

void function_3852(void) {
    // bb
    // branch -> 0x3852
    while (true) {
        // 0x3852
        // branch -> 0x3852
    }
}

void function_386c(int32_t a) {
    // bb
    // branch -> 0x386c
    while (true) {
        // 0x386c
        // branch -> 0x386c
    }
}

void function_399a(void) {
    // bb
    // branch -> 0x399a
    while (true) {
        // 0x399a
        // branch -> 0x399a
    }
}

void function_39ec(int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape2, int32_t tampoi, int32_t lime, int32_t nut, int32_t mango, int32_t avocado) {
    // bb
    // branch -> 0x39ec
    while (true) {
        // 0x39ec
        // branch -> 0x39ec
    }
}

void function_3a1e(int32_t a) {
    // bb
    // branch -> 0x3a1e
    while (true) {
        // 0x3a1e
        // branch -> 0x3a1e
    }
}

void function_3a30(int32_t a) {
    // bb
    // branch -> 0x3a30
    while (true) {
        // 0x3a30
        // branch -> 0x3a30
    }
}

void function_3a42(void) {
    // bb
    // branch -> 0x3a42
    while (true) {
        // 0x3a42
        // branch -> 0x3a42
    }
}

void function_3a88(void) {
    // bb
    // branch -> 0x3a88
    while (true) {
        // 0x3a88
        // branch -> 0x3a88
    }
}

void function_3a9a(void) {
    // bb
    // branch -> 0x3a9a
    while (true) {
        // 0x3a9a
        // branch -> 0x3a9a
    }
}

void function_3aa6(void) {
    // bb
    // branch -> 0x3aa6
    while (true) {
        // 0x3aa6
        // branch -> 0x3aa6
    }
}

void function_3b1c(void) {
    // bb
    // branch -> 0x3b1c
    while (true) {
        // 0x3b1c
        // branch -> 0x3b1c
    }
}

void function_3b28(void) {
    // bb
    // branch -> 0x3b28
    while (true) {
        // 0x3b28
        // branch -> 0x3b28
    }
}

void function_3b76(void) {
    // bb
    // branch -> 0x3b76
    while (true) {
        // 0x3b76
        // branch -> 0x3b76
    }
}

void function_3b80(void) {
    // bb
    // branch -> 0x3b80
    while (true) {
        // 0x3b80
        // branch -> 0x3b80
    }
}

void function_3b8e(void) {
    // bb
    // branch -> 0x3b8e
    while (true) {
        // 0x3b8e
        // branch -> 0x3b8e
    }
}

void function_3c2a(void) {
    // bb
    // branch -> 0x3c2a
    while (true) {
        // 0x3c2a
        // branch -> 0x3c2a
    }
}

void function_3d22(int32_t a) {
    // bb
    // branch -> 0x3d22
    while (true) {
        // 0x3d22
        // branch -> 0x3d22
    }
}

void function_3d56(int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine) {
    // bb
    // branch -> 0x3d56
    while (true) {
        // 0x3d56
        // branch -> 0x3d56
    }
}

void function_3e1e(void) {
    // bb
    // branch -> 0x3e1e
    while (true) {
        // 0x3e1e
        // branch -> 0x3e1e
    }
}

void function_3e2a(int32_t a) {
    // bb
    // branch -> 0x3e2a
    while (true) {
        // 0x3e2a
        // branch -> 0x3e2a
    }
}

void function_3e40(void) {
    // bb
    // branch -> 0x3e40
    while (true) {
        // 0x3e40
        // branch -> 0x3e40
    }
}

void function_3e4e(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x3e4e
    while (true) {
        // 0x3e4e
        // branch -> 0x3e4e
    }
}

void function_3e66(void) {
    // bb
    // branch -> 0x3e66
    while (true) {
        // 0x3e66
        // branch -> 0x3e66
    }
}

void function_3e7c(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x3e7c
    while (true) {
        // 0x3e7c
        // branch -> 0x3e7c
    }
}

void function_3ea4(void) {
    // bb
    // branch -> 0x3ea4
    while (true) {
        // 0x3ea4
        // branch -> 0x3ea4
    }
}

void function_3efc(void) {
    // bb
    // branch -> 0x3efc
    while (true) {
        // 0x3efc
        // branch -> 0x3efc
    }
}

void function_3f0e(void) {
    // bb
    // branch -> 0x3f0e
    while (true) {
        // 0x3f0e
        // branch -> 0x3f0e
    }
}

void function_3f1c(void) {
    // bb
    // branch -> 0x3f1c
    while (true) {
        // 0x3f1c
        // branch -> 0x3f1c
    }
}

void function_3f24(int32_t a) {
    // bb
    // branch -> 0x3f24
    while (true) {
        // 0x3f24
        // branch -> 0x3f24
    }
}

void function_3fbe(int32_t a) {
    // bb
    // branch -> 0x3fbe
    while (true) {
        // 0x3fbe
        // branch -> 0x3fbe
    }
}

void function_3fce(int32_t a) {
    // bb
    // branch -> 0x3fce
    while (true) {
        // 0x3fce
        // branch -> 0x3fce
    }
}

void function_4012(int32_t legume, int32_t jambul, int32_t durian, int32_t lychee) {
    // bb
    // branch -> 0x4012
    while (true) {
        // 0x4012
        // branch -> 0x4012
    }
}

void function_4090(int32_t a) {
    // bb
    // branch -> 0x4090
    while (true) {
        // 0x4090
        // branch -> 0x4090
    }
}

void function_40a0(void) {
    // bb
    // branch -> 0x40a0
    while (true) {
        // 0x40a0
        // branch -> 0x40a0
    }
}

void function_40a8(int32_t a) {
    // bb
    // branch -> 0x40a8
    while (true) {
        // 0x40a8
        // branch -> 0x40a8
    }
}

void function_40c0(void) {
    // bb
    // branch -> 0x40c0
    while (true) {
        // 0x40c0
        // branch -> 0x40c0
    }
}

void function_40de(void) {
    // bb
    // branch -> 0x40de
    while (true) {
        // 0x40de
        // branch -> 0x40de
    }
}

void function_4160(void) {
    // bb
    // branch -> 0x4160
    while (true) {
        // 0x4160
        // branch -> 0x4160
    }
}

void function_4178(void) {
    // bb
    // branch -> 0x4178
    while (true) {
        // 0x4178
        // branch -> 0x4178
    }
}

void function_4188(void) {
    // bb
    // branch -> 0x4188
    while (true) {
        // 0x4188
        // branch -> 0x4188
    }
}

void function_4196(void) {
    // bb
    // branch -> 0x4196
    while (true) {
        // 0x4196
        // branch -> 0x4196
    }
}

void function_419c(void) {
    // bb
    // branch -> 0x419c
    while (true) {
        // 0x419c
        // branch -> 0x419c
    }
}

void function_41ac(void) {
    // bb
    // branch -> 0x41ac
    while (true) {
        // 0x41ac
        // branch -> 0x41ac
    }
}

void function_41b6(void) {
    // bb
    // branch -> 0x41b6
    while (true) {
        // 0x41b6
        // branch -> 0x41b6
    }
}

void function_41c8(void) {
    // bb
    // branch -> 0x41c8
    while (true) {
        // 0x41c8
        // branch -> 0x41c8
    }
}

void function_41ea(void) {
    // bb
    // branch -> 0x41ea
    while (true) {
        // 0x41ea
        // branch -> 0x41ea
    }
}

void function_41f2(void) {
    // bb
    // branch -> 0x41f2
    while (true) {
        // 0x41f2
        // branch -> 0x41f2
    }
}

void function_4288(void) {
    // bb
    // branch -> 0x4288
    while (true) {
        // 0x4288
        // branch -> 0x4288
    }
}

void function_4294(int32_t a) {
    // bb
    // branch -> 0x4294
    while (true) {
        // 0x4294
        // branch -> 0x4294
    }
}

void function_42ae(int32_t a) {
    // bb
    // branch -> 0x42ae
    while (true) {
        // 0x42ae
        // branch -> 0x42ae
    }
}

void function_42ba(int32_t achira, int32_t damson, int32_t blackberry, int32_t chickoo) {
    // bb
    // branch -> 0x42ba
    while (true) {
        // 0x42ba
        // branch -> 0x42ba
    }
}

void function_42f0(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis) {
    // bb
    // branch -> 0x42f0
    while (true) {
        // 0x42f0
        // branch -> 0x42f0
    }
}

void function_4322(void) {
    // bb
    // branch -> 0x4322
    while (true) {
        // 0x4322
        // branch -> 0x4322
    }
}

void function_432a(int32_t a, int32_t b) {
    // bb
    // branch -> 0x432a
    while (true) {
        // 0x432a
        // branch -> 0x432a
    }
}

void function_4356(int32_t a) {
    // bb
    // branch -> 0x4356
    while (true) {
        // 0x4356
        // branch -> 0x4356
    }
}

void function_4368(int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo) {
    // bb
    // branch -> 0x4368
    while (true) {
        // 0x4368
        // branch -> 0x4368
    }
}

void function_438e(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x438e
    while (true) {
        // 0x438e
        // branch -> 0x438e
    }
}

void function_43a2(void) {
    // bb
    // branch -> 0x43a2
    while (true) {
        // 0x43a2
        // branch -> 0x43a2
    }
}

void function_43aa(void) {
    // bb
    // branch -> 0x43aa
    while (true) {
        // 0x43aa
        // branch -> 0x43aa
    }
}

void function_43bc(int32_t a, int32_t b, int32_t c) {
    // bb
    // branch -> 0x43bc
    while (true) {
        // 0x43bc
        // branch -> 0x43bc
    }
}

void function_43ec(int32_t a, int32_t b) {
    // bb
    // branch -> 0x43ec
    while (true) {
        // 0x43ec
        // branch -> 0x43ec
    }
}

void function_4404(int32_t a) {
    // bb
    // branch -> 0x4404
    while (true) {
        // 0x4404
        // branch -> 0x4404
    }
}

void function_441a(void) {
    // bb
    // branch -> 0x441a
    while (true) {
        // 0x441a
        // branch -> 0x441a
    }
}

void function_442e(void) {
    // bb
    // branch -> 0x442e
    while (true) {
        // 0x442e
        // branch -> 0x442e
    }
}

void function_4438(int32_t fig, int32_t apple2, int32_t banana2, int32_t lemon2, int32_t plum2, int32_t orange2, int32_t melon2, int32_t pear2) {
    // bb
    // branch -> 0x4438
    while (true) {
        // 0x4438
        // branch -> 0x4438
    }
}

void function_446c(int32_t a, int32_t b) {
    // bb
    // branch -> 0x446c
    while (true) {
        // 0x446c
        // branch -> 0x446c
    }
}

void function_4484(void) {
    // bb
    // branch -> 0x4484
    while (true) {
        // 0x4484
        // branch -> 0x4484
    }
}

void function_4490(void) {
    // bb
    // branch -> 0x4490
    while (true) {
        // 0x4490
        // branch -> 0x4490
    }
}

void function_4498(int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2) {
    // bb
    // branch -> 0x4498
    while (true) {
        // 0x4498
        // branch -> 0x4498
    }
}

void function_44b0(void) {
    // bb
    // branch -> 0x44b0
    while (true) {
        // 0x44b0
        // branch -> 0x44b0
    }
}

void function_44bc(void) {
    // bb
    // branch -> 0x44bc
    while (true) {
        // 0x44bc
        // branch -> 0x44bc
    }
}

void function_44c6(void) {
    // bb
    // branch -> 0x44c6
    while (true) {
        // 0x44c6
        // branch -> 0x44c6
    }
}

void function_44d2(void) {
    // bb
    // branch -> 0x44d2
    while (true) {
        // 0x44d2
        // branch -> 0x44d2
    }
}

void function_44e4(void) {
    // bb
    // branch -> 0x44e4
    while (true) {
        // 0x44e4
        // branch -> 0x44e4
    }
}

void function_4552(void) {
    // bb
    // branch -> 0x4552
    while (true) {
        // 0x4552
        // branch -> 0x4552
    }
}

void function_455c(void) {
    // bb
    // branch -> 0x455c
    while (true) {
        // 0x455c
        // branch -> 0x455c
    }
}

void function_4566(void) {
    // bb
    // branch -> 0x4566
    while (true) {
        // 0x4566
        // branch -> 0x4566
    }
}

void function_4574(int32_t a) {
    // bb
    // branch -> 0x4574
    while (true) {
        // 0x4574
        // branch -> 0x4574
    }
}

void function_45ae(void) {
    // bb
    // branch -> 0x45ae
    while (true) {
        // 0x45ae
        // branch -> 0x45ae
    }
}

void function_45bc(void) {
    // bb
    // branch -> 0x45bc
    while (true) {
        // 0x45bc
        // branch -> 0x45bc
    }
}

void function_45d6(void) {
    // bb
    // branch -> 0x45d6
    while (true) {
        // 0x45d6
        // branch -> 0x45d6
    }
}

void function_461a(void) {
    // bb
    // branch -> 0x461a
    while (true) {
        // 0x461a
        // branch -> 0x461a
    }
}

void function_4632(int32_t papaya, int32_t grape2, int32_t tampoi, int32_t lime) {
    // bb
    // branch -> 0x4632
    while (true) {
        // 0x4632
        // branch -> 0x4632
    }
}

void function_46d8(int32_t a) {
    // bb
    // branch -> 0x46d8
    while (true) {
        // 0x46d8
        // branch -> 0x46d8
    }
}

void function_46e2(int32_t a, int32_t b) {
    // bb
    // branch -> 0x46e2
    while (true) {
        // 0x46e2
        // branch -> 0x46e2
    }
}

void function_471c(int32_t a) {
    // bb
    // branch -> 0x471c
    while (true) {
        // 0x471c
        // branch -> 0x471c
    }
}

void function_472c(int32_t a, int32_t b) {
    // bb
    // branch -> 0x472c
    while (true) {
        // 0x472c
        // branch -> 0x472c
    }
}

void function_47a6(void) {
    // bb
    // branch -> 0x47a6
    while (true) {
        // 0x47a6
        // branch -> 0x47a6
    }
}

void function_47b8(void) {
    // bb
    // branch -> 0x47b8
    while (true) {
        // 0x47b8
        // branch -> 0x47b8
    }
}

void function_47f8(void) {
    // bb
    // branch -> 0x47f8
    while (true) {
        // 0x47f8
        // branch -> 0x47f8
    }
}

void function_4810(int32_t a) {
    // bb
    // branch -> 0x4810
    while (true) {
        // 0x4810
        // branch -> 0x4810
    }
}

void function_482a(void) {
    // bb
    // branch -> 0x482a
    while (true) {
        // 0x482a
        // branch -> 0x482a
    }
}

void function_4874(int32_t a) {
    // bb
    // branch -> 0x4874
    while (true) {
        // 0x4874
        // branch -> 0x4874
    }
}

void function_488a(void) {
    // bb
    // branch -> 0x488a
    while (true) {
        // 0x488a
        // branch -> 0x488a
    }
}

void function_489a(int32_t nut, int32_t mango, int32_t avocado, int32_t raspberry, int32_t tangerine, int32_t lulita, int32_t raisin, int32_t nectarine, int32_t legume) {
    // bb
    // branch -> 0x489a
    while (true) {
        // 0x489a
        // branch -> 0x489a
    }
}

int32_t function_290(int32_t a, int32_t b) {
    // 0x290
    apple = a;
    tea = (int32_t)Prnt;
    banana = cherry;
    pear = (int32_t)function_c;
    return cherry;
}

void function_2bc(int32_t a, int32_t b) {
    // 0x2bc
    int32_t x;
    banana = x;
    int32_t y;
    pear = y;
    apple = *(int32_t *)860;
}

int32_t function_2e8(void) {
    int32_t jambul = *(int32_t *)828;
    peach = jambul;
    grape = (int32_t)Prnt;
    lemon = jambul;
    function_3f4(apple, banana);
    return apple;
}

void function_3f4(int32_t a, int32_t b) {
    // 0x3f4
    function_3ce(a, b);
}

int32_t function_408(void) {
    int32_t x = *(int32_t *)1376;
    banana = x;
    pear = *(int32_t *)1380;
    grape = (int32_t)function_a;
    return x;
}

void function_4e4(int32_t durian, int32_t lychee) {
    // 0x4e4
    banana = lychee;
    tea = (int32_t)Prnt;
    apple = cherry;
    pear = (int32_t)function_4;
    function_402();
    // UNREACHABLE
}

void function_504(void) {
    // 0x504
    pear = (uint32_t)banana % 256;
    apple = *(int32_t *)1404;
}

int32_t function_50e(void) {
    int32_t achira = *(int32_t *)1388; // bp+516
    grape = achira;
    if (*(int32_t *)(achira + 24) != 0) {
        // 0x51e
        melon = 1313;
        // branch -> 0x520
    }
    int32_t damson = *(int32_t *)1384; // bp+520
    cherry = damson;
    *(int32_t *)(*(int32_t *)(damson + 2060) + 404) = (int32_t)function_10;
    if (*(int32_t *)(grape + 24) != 0) {
        // 0x534
        melon = 1335;
        // branch -> 0x536
    }
    int32_t blackberry = *(int32_t *)(cherry + 2056); // bp+536
    tea = blackberry;
    pear = 0x80000;
    *(int32_t *)(blackberry + 404) = 0x80000;
    apple = *(int32_t *)(cherry + 2060);
    return grape;
}

void function_552(int32_t chickoo, int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca) {
    // 0x552
    banana = jackfruit;
    pear = luma;
    tea = salal;
    apple = -25;
    int32_t duku;
    cherry = duku;
    int32_t eddo;
    grape = eddo;
    int32_t fig;
    apricot = fig;
    int32_t apple2;
    tomato = apple2;
    int32_t banana2;
    abaca = banana2;
    int32_t lemon2;
    peach = lemon2;
    int32_t plum2;
    lemon = plum2;
    int32_t orange2;
    plum = orange2;
}

int32_t function_81a(int32_t melon2, int32_t pear2, int32_t tea2) {
    // 0x81a
    apple = melon2;
    int32_t cherry2 = 8 * tea;
    tomato = *(int32_t *)2492;
    grape = cherry2 + 14;
    tea = cherry2 + 16;
    *(int16_t *)*(int32_t *)2496 = (int16_t)Prnt;
    pear = *(int32_t *)(tomato + 2100);
    banana = tea % 0x10000;
    int32_t result = grape % 0x10000; // bp+832
    grape = result;
    return result;
}

int32_t function_998(void) {
    // 0x998
    grape = -14;
    apple = abaca;
    return abaca;
}

int32_t function_9a8(int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3, int32_t tampoi, int32_t lime) {
    // 0x9a8
    banana = apricot2;
    pear = tomato2;
    tea = abaca2;
    apple = grape;
    int32_t result;
    cherry = result;
    int32_t nut;
    grape = nut;
    int32_t mango;
    apricot = mango;
    int32_t avocado;
    tomato = avocado;
    int32_t raspberry;
    abaca = raspberry;
    int32_t tangerine;
    peach = tangerine;
    int32_t lulita;
    lemon = lulita;
    int32_t raisin;
    plum = raisin;
    return result;
}

int32_t function_bce(int32_t nectarine) {
    // 0xbce
    *(int32_t *)(cherry + 828) = apricot;
    uint8_t legume;
    banana = legume;
    tea = (int32_t)*(int8_t *)(cherry + 872);
    int32_t result = *(int32_t *)3576;
    apple = result;
    return result;
}

int32_t function_c1c(int32_t jambul, int32_t durian, int32_t lychee) {
    // 0xc1c
    banana = durian;
    apple = *(int32_t *)3592;
    uint8_t achira;
    *(int8_t *)(cherry + 869) = achira;
    uint8_t damson;
    tea = damson;
    *(int8_t *)(cherry + 868) = damson;
    *(int8_t *)(cherry + 889) = (int8_t)tea;
    tea = (int32_t)Prnt;
    *(int16_t *)(cherry + 850) = (int16_t)Prnt;
    uint8_t blackberry;
    *(int8_t *)(cherry + 880) = blackberry % 2;
    pear = blackberry;
    *(int32_t *)(cherry + 860) = tea;
    *(int8_t *)(cherry + 845) = (int8_t)(pear / 2 % 2);
    int32_t chickoo = *(int32_t *)(cherry + 864);
    pear = chickoo;
    *(int32_t *)(cherry + 856) = chickoo;
    return pear;
}

int32_t function_d52(int32_t jackfruit) {
    // 0xd52
    uint8_t luma;
    int32_t result = (int32_t)luma & 2;
    tea = result;
    apple = *(int32_t *)3628;
    apricot = 1;
    return result;
}

void function_d8c(void) {
    // 0xd8c
    apple = cherry;
}

void function_dd0(void) {
    // 0xdd0
    function_dd8(grape, banana, pear, tea, 0, 0, 0);
}

void function_dd4(void) {
    // 0xdd4
    apple = -14;
}

void function_e6a(int32_t a, int32_t b) {
    // 0xe6a
    banana = b;
    tea = cherry % 0x10000;
    apple = *(int32_t *)3712;
}

int32_t function_106a(int32_t salal, int32_t taro, int32_t manis, int32_t rata, int32_t tuna, int32_t yucca, int32_t duku, int32_t eddo, int32_t fig, int32_t apple2, int32_t banana2) {
    // 0x106a
    banana = taro;
    cherry = (int32_t)Prnt;
    abaca = 1;
    pear = function_1058(salal);
    return apple;
}

int32_t function_1608(void) {
    // 0x1608
    apricot = (int32_t)Prnt;
    plum = *(int32_t *)0x1820;
    peach = 4;
    tomato = (int32_t)Prnt;
    function_163e();
    return apple;
}

void function_163e(void) {
    // 0x163e
    pear = *(int32_t *)(cherry + 716);
    int32_t * lemon2 = (int32_t *)(cherry + 92); // 0x2220
    int32_t plum2 = *lemon2; // 0x1650
    apple = plum2;
    banana = 100;
    int32_t orange2 = plum2 + 1; // 0x1654
    tea = orange2;
    *lemon2 = orange2;
}

void function_36fe(int32_t a, int32_t b, int32_t c) {
    // 0x36fe
    banana = tomato - grape;
    pear = grape;
    apple = apricot + 40 + cherry;
}

int32_t function_39a0(int32_t a) {
    // 0x39a0
    apple = a;
    pear = tea;
    return tea;
}

void function_39a2(int32_t a, int32_t b) {
    // 0x39a2
    apple = a;
    banana = b;
}

void function_3f40(void) {
    uint8_t melon2 = *(int8_t *)(cherry + 7); // 0x3f40
    int32_t pear2 = melon2 % 16; // 0x3f42
    tomato = pear2;
    if (0x2000000 * (int32_t)melon2 <= 0) {
        // 0x3f4a
        *(int8_t *)(grape + pear2 + 785) = *(int8_t *)(cherry + 6);
        // branch -> 0x3f52
    }
    // 0x3f52
    tea = (int32_t)*(int8_t *)(cherry + 7) & 128;
    apple = function_41e4(apple);
}

int32_t function_41ba(void) {
    // 0x41ba
    tea = (int32_t)(*(int8_t *)(cherry + 7) % 16);
    apple = cherry;
    banana = (int32_t)function_4;
    return cherry;
}

int32_t function_41e4(int32_t a) {
    // 0x41e4
    pear = (int32_t)*(int8_t *)(cherry + tea);
    int32_t x = *(int32_t *)0x4238; // 0x41e8
    apple = x;
    return x;
}

void function_41fe(void) {
    // 0x41fe
    cherry += 8;
}

int32_t function_4200(void) {
    int32_t x = lemon - 1; // 0x4200
    tea = x;
    lemon = x % 0x10000;
    function_3f40();
    return tea;
}

int32_t function_4210(int32_t tea2, int32_t cherry2, int32_t grape2, int32_t apricot2, int32_t tomato2, int32_t abaca2, int32_t peach2, int32_t papaya, int32_t grape3) {
    // 0x4210
    banana = cherry2;
    pear = grape2;
    tea = apricot2;
    int32_t result = abaca; // 0x4210
    apple = result;
    int32_t tampoi;
    cherry = tampoi;
    int32_t lime;
    grape = lime;
    int32_t nut;
    apricot = nut;
    int32_t mango;
    tomato = mango;
    int32_t avocado;
    abaca = avocado;
    int32_t raspberry;
    peach = raspberry;
    int32_t tangerine;
    lemon = tangerine;
    int32_t lulita;
    plum = lulita;
    return result;
}

void function_44d8(int32_t a) {
    // 0x44d8
    apple = a;
    *(int8_t *)(cherry + 837) = (int8_t)tea;
    grape = function_44e8(apple, banana, pear);
}

int32_t function_44e8(int32_t raisin, int32_t nectarine, int32_t legume) {
    // 0x44e8
    apple = raisin;
    banana = nectarine;
    pear = *(int32_t *)(cherry + 864);
    tea = (int32_t)Prnt;
    *(int8_t *)(cherry + 842) = (int8_t)Prnt;
    *(int32_t *)(cherry + 860) = tea;
    *(int32_t *)(cherry + 856) = pear;
    int32_t jambul = *(int32_t *)0x450c; // 0x44fa
    pear = jambul;
    *(int32_t *)jambul = tea;
    int32_t durian;
    tea = durian;
    int32_t lychee;
    cherry = lychee;
    int32_t result;
    grape = result;
    return result;
}

int32_t function_457c(int32_t a) {
    // 0x457c
    peach = 0;
    plum = cherry;
    grape = 0;
    function_47ca(a);
    return grape;
}

int32_t function_4588(int32_t achira, int32_t damson) {
    // bb
    apple = achira;
    *(int8_t *)(tea + damson) = (int8_t)pear;
    int32_t blackberry = tea; // 0x458a
    int32_t chickoo = blackberry + 1; // 0x458a
    tea = chickoo;
    // branch -> 0x4588
    while (blackberry != 255) {
        // 0x4588
        apple = achira;
        *(int8_t *)(chickoo + damson) = (int8_t)pear;
        blackberry = tea;
        chickoo = blackberry + 1;
        tea = chickoo;
        // continue -> 0x4588
    }
    // 0x4596
    lemon = 1;
    tea = *(int32_t *)(cherry + 220);
    grape = function_47bc(apple);
    return apple;
}

int32_t function_4670(int32_t jackfruit, int32_t luma, int32_t salal, int32_t taro) {
    // 0x4670
    int8_t manis;
    int32_t rata = manis; // 0x4670
    int8_t * tuna = (int8_t *)rata; // 0x2306
    uint8_t yucca = *tuna; // 0x4672
    int32_t duku = (int32_t)Prnt; // 0x469a
    if (yucca != 0) {
        uint32_t eddo = (int32_t)yucca; // 0x46884
        int32_t fig = (int32_t)Prnt; // 0x468e3
        int32_t apple2 = (int32_t)Prnt + 1; // 0x4680
        while (eddo >= 2) {
            // 0x467c
            eddo /= 2;
            fig = (fig + 1) % 256;
            apple2 += 1;
            // continue -> 0x467c
        }
        // 0x467a
        duku = apple2;
        // branch -> 0x4692
    }
    // 0x4692
    int8_t banana2;
    int32_t lemon2 = banana2; // 0x4692
    pear = lemon2;
    tea = 0;
    banana = duku % 256;
    int8_t * plum2 = (int8_t *)lemon2; // 0x2311
    *plum2 = (int8_t)duku;
    *(int8_t *)pear = (int8_t)(banana - 1);
    int32_t orange2;
    *(int32_t *)(tea + orange2) = (int32_t)Prnt;
    int32_t melon2 = tea; // 0x46ae
    int32_t pear2 = melon2 + 4; // 0x46b0
    tea = pear2;
    int32_t tea2;
    *(int32_t *)(melon2 + tea2 + 224) = 0;
    // branch -> 0x46a6
    while (pear2 != 32) {
        // 0x46a6
        *(int32_t *)(tea + orange2) = (int32_t)Prnt;
        melon2 = tea;
        pear2 = melon2 + 4;
        tea = pear2;
        *(int32_t *)(melon2 + tea2 + 224) = 0;
        // continue -> 0x46a6
    }
    // 0x46be
    pear = lemon2;
    apple = 256;
    apricot = (int32_t)Prnt;
    abaca = (int32_t)Prnt;
    int32_t cherry2 = 1 << (int32_t)*plum2; // 0x46d0
    banana = cherry2;
    tea = rata;
    *tuna = (int8_t)cherry2;
    banana %= 256;
    return apple;
}

int32_t function_476c(int32_t grape2, int32_t apricot2) {
    uint32_t tomato2 = apricot; // 0x476c
    int32_t abaca2 = *(int32_t *)0x4848; // 0x477a
    melon = abaca2;
    int32_t peach2 = 1 << tomato2 % 32; // 0x477e
    apple = peach2;
    int32_t papaya = tomato2 / 32 + 8 * grape; // 0x4782
    tea = papaya;
    apricot = tomato2 + 1;
    int32_t * grape3 = (int32_t *)(4 * papaya + abaca2); // 0x2330
    *grape3 = *grape3 | peach2;
    int32_t tampoi = tea + 56; // 0x4792
    tea = tampoi;
    int32_t * lime = (int32_t *)(4 * tampoi + cherry); // 0x2334
    banana = abaca;
    *lime = apple | *lime;
    abaca += 1;
    apple = *(int32_t *)0x4854;
    return banana;
}

int32_t function_47aa(int32_t nut) {
    // 0x47aa
    int32_t mango;
    tea = mango;
    banana = grape;
    int32_t result = *(int32_t *)0x4858; // 0x47b2
    apple = result;
    pear = *(int32_t *)(mango + 224);
    return result;
}

void function_3ce(int32_t avocado, int32_t raspberry) {
    // 0x3ce
    apple = avocado;
    banana = raspberry;
    uint32_t tangerine = cherry;
    int32_t lulita;
    pear = 11 - lulita + tangerine + (int32_t)(tangerine > 0xfffffff3);
    tea = (int32_t)Prnt;
    grape = function_50e();
}

void function_3fc(void) {
    // 0x3fc
    apple = cherry;
    pear = (int32_t)function_c;
}

void function_dd8(int32_t raisin, int32_t nectarine, int32_t legume, int32_t jambul, int32_t durian, int32_t lychee, int32_t achira) {
    // 0xdd8
    int32_t damson;
    abaca = damson;
    apricot = 32 * jambul;
    banana = 240;
    int32_t blackberry;
    tomato = 32 * blackberry;
    int32_t chickoo;
    cherry = 128 * chickoo;
    grape = 0x80000 * jambul;
    tea = 0x2000 * jambul;
    pear = 0x1e000;
    apple = 2048 * jambul;
}

int32_t function_1058(int32_t jackfruit) {
    // 0x1058
    apple = jackfruit;
    int32_t result = *(int32_t *)0x1080; // 0x1058
    pear = result;
    int32_t luma = grape; // 0x105a
    tea = (int32_t)*(int8_t *)(luma + result);
    grape = luma + 1;
    tomato += 1024;
    return result;
}

void function_39a6(void) {
    // 0x39a6
    *(int16_t *)abaca = (int16_t)apricot;
    if (*(int32_t *)(*(int32_t *)0x3a00 + 24) != 0) {
        // 0x39b4
        melon = 0x39b7;
        // branch -> 0x39b6
    }
    int32_t salal = *(int32_t *)0x3a04; // 0x39b6
    tea = salal;
    int32_t * taro = (int32_t *)salal; // 0x2361
    int32_t manis = *(int32_t *)(*taro + 300) & -0x100001; // 0x39c2
    banana = manis;
    *(int32_t *)(*taro + 300) = manis;
    cherry = tea;
    if (*(int32_t *)(*(int32_t *)0x3a00 + 24) != 0) {
        // 0x39d8
        melon = 0x39db;
        // branch -> 0x39da
    }
    // 0x39da
    pear = (int32_t)Prnt;
    *(int32_t *)(*(int32_t *)tea + 308) = (int32_t)Prnt;
    tea = (int32_t)*(int16_t *)abaca;
    apple = *(int32_t *)0x3a0c;
}

/* --------- External Functions --------- */

// int32_t llvm_bswap_i32(int32_t var1);
