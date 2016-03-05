class CfgVehicles {

	class SoldierWB;

//US Army

	class rhsusf_infantry_army_base : SoldierWB {
		ASR_AI_SKILL_REG2;
		ASR_AI_CAMO_FULL;
		minFireTime = 7;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_COST_REG;
	};
    class rhsusf_army_ocp_rifleman;
	class rhsusf_army_ocp_riflemanl : rhsusf_army_ocp_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman {
		ASR_AI_AMMOCOEF_AT;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_grenadier : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_autorifleman : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_autoriflemana : rhsusf_army_ocp_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_machinegunnera : rhsusf_army_ocp_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_army_ocp_fso : rhsusf_army_ocp_jfo {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_army_ocp_javelin : rhsusf_army_ocp_riflemanat {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
	};
	class rhsusf_army_ocp_engineer : rhsusf_army_ocp_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_explosives : rhsusf_army_ocp_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
	};
	class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_CAMO_FULL;
		minFireTime = 5;
	};
	class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
		ASR_AI_SKILL_PIL1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_helicrew : rhsusf_army_ocp_helipilot {
		ASR_AI_COST_REG;
	};

//US MC

	class rhsusf_infantry_usmc_base;
    class rhsusf_usmc_marpat_wd_rifleman;
	class rhsusf_usmc_marpat_wd_rifleman_light : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
	};
	class rhsusf_usmc_marpat_wd_grenadier : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_autorifleman_m249 : rhsusf_usmc_marpat_wd_autorifleman {
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_machinegunner_ass : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_marpat_wd_javelin : rhsusf_usmc_marpat_wd_riflemanat {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_stinger : rhsusf_usmc_marpat_wd_riflemanat {
		ASR_AI_AMMOCOEF_AT;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
	};
	class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_STANDARD;
	};
	class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
		minFireTime = 5;
	};
	class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_PIL1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_helicrew : rhsusf_usmc_marpat_wd_helipilot {
		ASR_AI_COST_REG;
	};

// USMC LAR

	class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
	};
	class rhsusf_usmc_lar_marpat_wd_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
	};
	class rhsusf_usmc_lar_marpat_wd_grenadier_m32 : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
	};
	class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_REG;
	};

//USMC FR

	class rhsusf_infantry_usmc_fr_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};
    class rhsusf_usmc_fr_marpat_wd_rifleman;
	class rhsusf_usmc_fr_marpat_wd_riflemanat : rhsusf_usmc_fr_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_AT;
	};
	class rhsusf_usmc_fr_marpat_wd_squadleader : rhsusf_usmc_fr_marpat_wd_rifleman {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_fr_marpat_wd_teamleader : rhsusf_infantry_usmc_fr_base {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_fr_marpat_wd_marksman : rhsusf_usmc_fr_marpat_wd_rifleman {
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
	};
	class rhsusf_usmc_fr_marpat_wd_spotter : rhsusf_usmc_fr_marpat_wd_marksman {
		ASR_AI_AMMOCOEF_STANDARD;
	};
	class rhsusf_usmc_fr_marpat_wd_sniper : rhsusf_usmc_fr_marpat_wd_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_AMMOCOEF_SNIPER;
	};

//MARSOC

	class rhsusf_socom_marsoc_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		minFireTime = 5;
	};
	class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
    class rhsusf_socom_marsoc_cso;
	class rhsusf_socom_marsoc_teamleader : rhsusf_socom_marsoc_cso {
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_socom_marsoc_teamchief : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_jfo : rhsusf_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_marksman : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
	};
	class rhsusf_socom_marsoc_spotter : rhsusf_socom_marsoc_cso_light {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
	};
    class rhsusf_usmc_marpat_wd_rifleman_m4;
	class rhsusf_navy_marpat_wd_medic : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_COST_REG;
	};
    class rhsusf_usmc_marpat_d_rifleman_m4;
	class rhsusf_navy_marpat_d_medic : rhsusf_usmc_marpat_d_rifleman_m4 {
		ASR_AI_COST_REG;
	};
    class rhsusf_socom_marsoc_cso_cqb;
	class rhsusf_navy_sarc : rhsusf_socom_marsoc_cso_cqb {
		ASR_AI_COST_SPECIAL;
	};

//Air Force

	class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_NONE;
	};
};
